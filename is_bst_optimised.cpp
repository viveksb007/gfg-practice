#include<limits.h>
bool isbst(Node* root,int min,int max){
    if(root == NULL) return true;
    if(root->data < min) return false;
    if(root->data > max) return false;
    return isbst(root->left,min,root->data-1) && isbst(root->right,root->data+1,max);
}  
bool checkBST(Node* root){
    return isbst(root,INT_MIN,INT_MAX);
}
