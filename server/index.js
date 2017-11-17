var serve = require('koa-static');
var koa = require('koa');
var fs = require('fs');

const Router = require('koa-router');
var http = require('http');

var https = require('https');

var enforceHttps = require('koa-sslify');

var app = new koa();
var { ApiRouter } = require('./api-router.js')
var router = new Router({
  prefix: '/api'
});

// Force HTTPS on all page
app.use(enforceHttps({
  trustProtoHeader: true
}));
app.use(serve('.'));

app.use(serve(__dirname + '/../unity/Assets/GameApp/LuaScripts/'));


app.use(ApiRouter.routes());


// app.listen(3000);
var options = {
  key: fs.readFileSync('ssl/server-key.pem'),
  cert: fs.readFileSync('ssl/server-cert.pem')
}

// start the server
http.createServer(app.callback()).listen(80);
https.createServer(options, app.callback()).listen(443);

console.log('RN-Unity-Starter demo server https listening on port 443');
