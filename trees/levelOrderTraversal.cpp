Level Order Traversal technique is defined as a method to traverse a
Tree such that all nodes present in the same level are traversed
completely before traversing the next level.

struct Node{
    int data;
    struct Node*left, *right;
}
Node* newNode(struct Node*node){
    Node* node= new Node;
    node->data=data;
    node->left=node->right=NULL;
}
int height(struct Node* node){
    if(node==NULL)
    return 0;
    int lh=height(node->left);
    int rh=height(node->right);
    if(lh>rh)
    return lh+1;
    else return rh+1;
}
void printLevelOrder(Node*node){
    int h=height(node);
    for(int i=0;i<h;i++){
        printcurrentLevel(node,i);
    }
}
void printcurrentLevel(Node*node, int level){
    if(node==NULL)
    return;
    if(level==1)
    cout<<node->data<<" ";
    else if (level>1){
        printcurrentLevel(root->left,level-1);
        printcurrentLevel(root->right,level-1);
    }
}