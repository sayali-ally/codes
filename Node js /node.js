const { promises } = require('dns');
const fs= require('fs');
const path=require('path')
const dirPath = path.join(__dirname,'crud');
const filePath = `${dirPath}/apple.txt`;


fs.writeFileSync(filePath, 'this is a simple text file');   ->creating and writing inside a file 

fs.readFile(filePath,'utf8',(err,item)=>{      ->reading a file
    console.log(item);
})

fs.appendFile(filePath, "and file name is apple.txt",(err)=>{         ->appending text 
    if(!err)
    console.log('file got updated');
});                                      


fs.rename(filePath,`${dirPath}/fruit.txt`,(err)=>{
    if(!err)
    console.log("file anme is updated");
})

fs.unlinkSync(filepath) ->removes a file

buffer -> temp memory location.

node.js is asynchronous 

setTimeout(() => {
    console.log("hiiii")
}, 2000);


setTimeout(()=>{

},2000)



