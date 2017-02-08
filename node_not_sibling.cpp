/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

/* Prints the nodes having no siblings.  */
void printSibling(Node* node)
{
    if(node == NULL) return;
    if((node->left == NULL)&&(node->right != NULL)){
        cout<<node->right->data<<" ";
        printSibling(node->right);
    }else if((node->right == NULL)&&(node->left != NULL)){
        cout<<node->left->data<<" ";
        printSibling(node->left);
    }else{
    printSibling(node->left);
    printSibling(node->right);
    }
}
