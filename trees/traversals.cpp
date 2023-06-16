#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*left, *right;
}
Node* newNode(struct Node*node){
    Node* temp=new Node;
    temp->data=data;
    temp-left=NULL;
    temp->right=NULL;
}
void Inorder(Node* node){
    if(node==NULL)
    return;

    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}


Inorder-> left,root,right;

Preorder->root,left,right;

Postorder>left,right,root;