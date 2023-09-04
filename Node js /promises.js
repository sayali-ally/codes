how to handle asynchronous data => use promises

let a=20;
let b=0;

let c= new Promise((resolve,reject)=>{
    setTimeout(()=>{
        resolve(20)
    },2000);
})

c.then((data)=>{
    b=data;
    console.log(a+b);
})


a+b=> 50


function multiBytwo(num){
    return new Promise((resolve,rej)=>{
        setTimeout(()=>{
            resolve(num*2);
        },1000)
    })
}

function addFive(num){
    return new Promise((resolve,rej)=>{
        setTimeout(()=>{
            resolve(num+5);
        },1500)
    })
}

//usage
multiBytwo(4)
.then((res)=>addFive(res))
.then((finalRes)=>{
    console.log(finalRes)
});




function Age(age){
    return new Promise((resolve,reject)=>{
        if(age>=18){
            resolve("access given");     -> success condition 
        }
        else{
            reject("access denied");    -> failure condition
        } 
    })
}