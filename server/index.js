var serve = require('koa-static');
var koa = require('koa');
const Router = require('koa-router');

var app = new koa();
var {ApiRouter}=require('./api-router.js')
var router = new Router({
  prefix: '/api'
});

app.use(serve('.'));

app.use(serve(__dirname + '/../unity/Assets/GameApp/LuaScripts/'));

app.use(ApiRouter.routes());

app.listen(3000);

console.log('RN-Unity-Starter demo server listening on port 3000');
