var Router = require('koa-router');
var fs = require('fs');
var ExFile = require('./utils/exfile.js');


var ApiRouter = new Router({
  prefix: '/api'
});


ApiRouter.get('/files/list', async ctx => {
  ctx.body = ExFile.list(__dirname + '/../unity/Assets/GameApp/LuaScripts');
});

ApiRouter.get('/files/zip', async ctx => {
  //console.log(ctx);
  let zip = await ExFile.zip(__dirname + '/../unity/Assets/GameApp/LuaScripts');
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