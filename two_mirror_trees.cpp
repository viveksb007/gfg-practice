/* Node structure
struct Node
{
    int data;
    Node* left, *right;
}; */

/* Given two trees, should return true if they are
   mirror of each other. */
int areMirror(Node* a, Node* b)
{
    if((a==NULL)&&(b==NULL)) return 1;
    if(((a==NULL)&&(b!=NULL))||((a!=NULL)&&(b==NULL))) return 0;
    if(a->data == b->data)
    return areMirror(a->left,b->right) && areMirror(a->right,b->left);
    else
    return 0;
}


