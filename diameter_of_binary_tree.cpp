/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

#include<algorithm>

int height(Node *node){
    if(node == NULL) return 0;
    return 1 + max(height(node->left),height(node->right));
}

/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node)
{
    if(node == NULL) return 0;
    int lh = height(node->left);
    int rh = height(node->right);
    
    int lsubd = diameter(node->left);
    int rsubd = diameter(node->right);
    
    return max(1+lh+rh,max(lsubd,rsubd));
    
}
