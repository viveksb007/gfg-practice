/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

/* Computes the height of binary tree with given root.  */
int height(Node* node)
{
    if(node == NULL) return 0;
    int lh = height(node->left);
    int rh = height(node->right);
    if(lh>rh)
    return lh+1;
    else
    return rh+1;
}
