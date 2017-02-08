/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(Node* root)
{
    if(root == NULL) return 0;
    int lc = countLeaves(root->left);
    int rc = countLeaves(root->right);
    if( lc+rc == 0 )
     return 1;
     return lc+rc;
}

