var Router = require('koa-router');
var fs = require('fs');
var ExFile = require('./utils/exfile.js');


var ApiRouter = new Router({
  prefix: '/api'
});


const LuaScriptsPath = __dirname + '/../unity/Assets/Resources/LuaScripts';

ApiRouter.get('/files/list', async ctx => {
  ctx.body = ExFile.list(LuaScriptsPath);
});

ApiRouter.get('/files/zip', async ctx => {
  //console.log(ctx);
  let zip = await ExFile.zip(LuaScriptsPath);
  if (!zip.err) {

    ctx.set('Content-disposition', 'attachment; filename=' + zip.filename);
    // ctx.set('Content-type', 'zip');
    ctx.type = 'zip';
    ctx.body = fs.createReadStream(zip.filepath);
  } else {
    ctx.body = zip.filename + 'create error:' + zip.err;
  }

});

exports.ApiRouter = ApiRouter;