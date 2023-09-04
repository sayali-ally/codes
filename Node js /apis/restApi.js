const express= require('express');
const app=express();
const port=3000;

let books=[
    {id:1, title:"b1"},
    {id:2, title:"b2"}
]

app.use(express.json());
//api to get all the books
app.get('/api/books',(req,res)=>{
    res.json(books);
});

//api to get a specific book
app.get('/api/books/id',(req,res)=>{
    const bookID=parseInt(req.params.id);
    const book=books.find((b)=>b.id===bookID);

    if(!book){
        return res.status(404).json({error:'Book not found'})
    }
    res.json(book);
});

//Add a new book
app.post('/api/books',(req,res)=>{
    const {title}=req.body;
})

