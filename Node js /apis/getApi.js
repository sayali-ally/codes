const express = express();
const app=express();
const port=5000;

app.get('',(req,res)=>{
    const users=[
        {id:1, name:"Sayali"},
        {id:2, name:"Snehal"},
        {id:3, name:"Soham"}
    ];

    res.json(users);
});

app.get('/about',(req,res)=>{
    res.send("This is a abput page");
});

app.get('/help',(req,res)=>{
    res.send("This is a help page");
});

app.listen(port,()=>{
    console.log(`The server is running on ${port}`);
})