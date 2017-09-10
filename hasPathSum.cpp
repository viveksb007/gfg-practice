/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/*you are required to 
complete this function */
bool hasPathSum(Node *node, int sum)
{
    if(node == NULL) return false;
    if(node -> left == NULL && node -> right == NULL && sum == node->data)
    return true;
    return hasPathSum(node->left,sum-node->data) || hasPathSum(node->right,sum-node->data);
}
