const http = require('http')   // import http module
const data = require('./data')
http.createServer((req,resp)=>{    //created a server 
resp.writeHead(200,{'content-type':'application\json'})
resp.write(JSON.stringify(data));
resp.end();
}).listen(6000);
