const bodyParser = require('body-parser');
const exprss=require('express');
const app=express();
app.use(bodyParser.json());

//connect to mongodb database
