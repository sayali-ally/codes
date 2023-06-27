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


