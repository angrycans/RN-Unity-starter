'use strict';
var fs = require('fs');


function getAllFiles(dirpath){
    //console.log("get files")
    var res = [] , files = fs.readdirSync(dirpath);
    files.forEach(function(file){
      var pathname = dirpath+'/'+file
      , stat = fs.lstatSync(pathname);
  
     if (!stat.isDirectory()){
        res.push(pathname);
     } else {
        res = res.concat(getAllFiles(pathname));
     }
   });
   return res
}


exports.getAllFiles=getAllFiles;