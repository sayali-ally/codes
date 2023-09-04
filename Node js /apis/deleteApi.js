with the help of api , we can delete data 

const express= require('express');
const app=express();
const port=5000;

app.use(express.json());

const users=[
 {id:1,name:'sayali'},
 {id:2,name:'snehal'},
 {id:3,name:'soham'}
];
app.delete('api/users/:id',(req,res)=>{
    const userId=parseInt(req.params.id);
    const userIndex=users.findIndex();

    if(userIndex===-1){
        return res.status(404).json({error:'user not found'});
    }
    users.splice(userIndex,1);
    res.json({message:'user deleted successfully'});
});

app.listen(port,()=>{
    console.log();
})
