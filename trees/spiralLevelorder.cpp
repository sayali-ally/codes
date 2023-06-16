struct Node{
    int data;
    struct Node*left, *right;
}
struct Node*newNode(int data){
    Node* node=new Node;
    node->data=data;
    node->left=node->right==NULL;
}
int height(Node*root){
    if(root==NULL)
    return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    if(lh>rh)
    return lh+1;
    else 
    return rh+1;
}
void printSpiralLevelOrder(Node*root){
    int h=height(root);
    bool flag;
    for(int i=1;i<=h;i++){
        printcurrentLevel(root,i,flag)
        flag=!flag;
    }
}
void printcurrentLevel(Node*root, int level, bool flag){
    if(root==NULL)
    return;
    if(level==1)
    cout<<root->data<<" ";
    else if(level>1){
        if(flag){
            printcurrentLevel(root->left,level-1,flag);
            printcurrentLevel(root->right,level-1,flag);
        }
        else{
            printcurrentLevel(root->right,level-1,flag);
            printcurrentLevel(root->left,level-1,flag);
        }
    }
}