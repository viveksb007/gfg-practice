/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Prints preorder traversal of Binary Tree.  In output
   all keys should be separated by space. For example
  preorder traversal of below tree should be "10 20 30"
         10
       /      \ 
    20       30 */
void preorder(Node* root)
{
    if(root == NULL) return;
    cout<<root->data<<" ";
    if(root->left == NULL)
    preorder(root->right);
    else{
    preorder(root->left);
    preorder(root->right);
    }
}
