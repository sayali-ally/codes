function Age(age){
    return new Promise((resolve,reject)=>{
        if(age>=18){
            resolve("Access provided");
        }
        else{
            reject("Access denied");
        }
    })
}


async function foo(){
    try{
        let result = await Age(21);
        console.log("Result:",result);
    }
    catch(error){
        console.error("Error:",error);
    }
}

foo();


function Age(age){
    return new Promise((resolve,reject)=>{
        if(age>=18){
            resolve("Age is > 18")
        }
        else{
            reject("Age should be > 18")
        }
    })
}

async function foo(){
    try{
        let result = await Age(21);
        console.log("Result:",result);
    }
    catch(error){
        console.error("Error:", error);
    }
}

foo();


function Age(age){
    return new Promise((resolve,reject)=>{
        if(age>=18){
            resolve("access provided");
        }
        else{
            resolve("access denied");
        }
    })
}

async function foo(){
    try{
        let res=await Age(32);
        console.log("Result:",res);
    }
    catch(error){
        console.error("Error:",error)
    }
}

basic api 

const http=require('http');
const data = require('data');
http.createServer((req,res)=>{
    res.write(JSON.stringify(data));
    res.end();
})


function Age(age){
    return new Promise((res,rej)=>{
        if(age>=18)
        res("access done");
        else{
        res("access denied");
        }
    })
}

async function foo(){
    try{
        let result=await Age(21);
        console.log("Result:",result)
    }
    catch(error){
        console.error("Error:",error);
    }
}