'use strict';
var fs = require('fs');
var os = require('os');
var path = require('path');

var archiver = require('archiver');

function list(dirpath) {
  //console.log("get files")
  var res = [], files = fs.readdirSync(dirpath);
  files.forEach(function (file) {
    var pathname = dirpath + '/' + file
      , stat = fs.lstatSync(pathname);

    if (!stat.isDirectory()) {
      res.push(pathname);
    } else {
      res = res.concat(list(pathname));
    }
  });
  return res
}

async function zip(dirpath) {
  return new Promise((resolve, reject) => {
    var tmpzipfilename = os.tmpdir + '/' + path.basename(dirpath) + '.zip'
    console.log("tmpzipfilename", tmpzipfilename);
    var output = fs.createWriteStream(tmpzipfilename);
    var zipArchive = archiver('zip');

    output.on('close', async function () {
      console.log('archiver has been finalized and the output file descriptor has closed.');
      console.log(zipArchive.pointer() + ' total bytes');

      resolve({ err: null, filepath: tmpzipfilename, filename: path.basename(dirpath) + '.zip' });
    });
    output.on('end', function () {
      console.log('Data has been drained');
    });

    // good practice to catch warnings (ie stat failures and other non-blocking errors)
    zipArchive.on('warning', function (err) {
      console.log(zipArchive.on('warning'), err);
    });

    // good practice to catch this error explicitly
    zipArchive.on('error', function (err) {
      console.log(zipArchive.on('error'), err);
      resolve({ err: err, filepath: tmpzipfilename, filename: path.basename(dirpath) + '.zip' });

    });



    zipArchive.pipe(output);

    //zipArchive.directory(dirpath, false);
    zipArchive.glob("**/*.txt",
      {
        cwd: dirpath,
        // ignore: ['*.meta']
      },
      {
        prefix: path.basename(dirpath)
      }
    );

    zipArchive.finalize(function () {
      console.log('finalize');

    });

  });
}



exports.list = list;
exports.zip = zip;