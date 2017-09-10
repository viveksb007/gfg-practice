node *lca(node *root, int v1,int v2)
{
    if(root == NULL) return root;
    if(root->data == v1 || root->data == v2)
        return root;
    node* l = lca(root->left,v1,v2);
    node* r = lca(root->right,v1,v2);
    if(l!=NULL && r!=NULL) return root;
    if(l!=NULL) return l;
    else return r;
}

