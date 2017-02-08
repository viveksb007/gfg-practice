/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Prints postorder traversal of Binary Tree.  In output
   all keys should be separated by space. For example
  postorder traversal of below tree should be "20 30 10"
         10
       /      \ 
    20       30 */

void postOrder(Node* root)
{
    if(root == NULL) return;
    if((root->left !=NULL)&&(root->right != NULL)){
        postOrder(root->left);
        postOrder(root->right);
    }else if(root->left != NULL){
        postOrder(root->left);
    }else {
        postOrder(root->right);
    } 
    cout<<root->data<<" ";
}

