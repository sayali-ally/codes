const express=require('express');
const app=express();
const port=5000;

app.use(express.json());

app.post('/about',(req,res)=>{
    console.log(req.body)
    // res.send({name:"sayali"});
    req.send(req.body);
});

to submit 


const express=require('express');
const app=express();

app.use(express.json());

app.post('/about',(req,res)=>{
    console.log(req.body);
    req.send(req.body);
});

app.listen(3000);
