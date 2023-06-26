#include<bits/stdc++.h>
using namespace std;
class stack{
int size;
int top;
int *arr;

public:
stack(){
    top=-1;
    size=1000;
    arr = new int [size];
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
int Size(){
    return top+1;
}
};