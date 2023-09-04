#include<bits/stdc++.h>
using namespace std;
class stack(){
    int size;
    int *arr,
    int top;

    public:
    stack(){
        top=-1;
        size=1000;
        arr=new int [size];
    }

    void push(int x){
        top++;
        arr[top]=x;
    }
    int pop(){
        int x=arr[top];
        top--;
        return x;
    }
    int top(){
        return arr[top];
    }
    int size(){
        return top+1;
    }
}




class stack(){
    int *arr;
    int size;
    int top;

    public:
    stack(){
        top=-1;
        size=1000;
        arr= new int[size];
    }

    void push(int x){
         top++;
         arr[top]=x;
    }
    int pop(){
        int x=arr[top];
        top--;
        return x;
    }
    int top(){
        return arr[top];
    }
    int size(){
        return top+1;
    }
}