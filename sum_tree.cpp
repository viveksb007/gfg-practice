/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
int sumTree(Node* root);
// Should return true if tree is Sum Tree, else false
bool isSumTree(Node* root)
{
    if(root == NULL) return true;
    
    if((root->left == NULL)&&(root->right == NULL)) return true;
    
    if(root->data == sumTree(root->left) + sumTree(root->right)){
        return isSumTree(root->left)&&isSumTree(root->right);
    }
    return false;
}

int sumTree(Node* root){
    if(root == NULL) return 0;
    return root->data + sumTree(root->left) + sumTree(root->right);
}

