data update with api 
const express = require('express');
const app=express();
const port=5000;

app.use(express.json());

let users=[
    {id:1,name:'sayali'},
    {id:2,name:'snehal'},
    {id:3,name:'soham'}
];

app.put('/about',(req,res)=>{

    const userId=parseInt(req.params.id);

    const user=users.find((user)=>user.id===userId);
    if(!user){
        return res.status(404).json({error:'User not found'});
    }

    user.name=req.body.name;
    res.json({message:"User updated Successfully"});
});

app.listen(port,()=>{
    console.log(`the server is running on port ${port}`);
})