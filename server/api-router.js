var Router = require('koa-router');
var ExFile = require('./utils/exfile.js');

var ApiRouter = new Router({
  prefix: '/api'
});


ApiRouter.get('/allfiles', async ctx => {
    ctx.body = ExFile.getAllFiles(__dirname + '/../unity/Assets/GameApp/LuaScripts');
});


exports.ApiRouter=ApiRouter;