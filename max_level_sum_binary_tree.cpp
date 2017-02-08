/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
int height1(Node* node);
void level(Node* node,int level1);
int sum = 0;
/*You are required to complete below method */
int maxLevelSum(Node * root)
{
    int h = height1(root);
    if(h == 1) return root->data;
    int max = root->data;
    for(int i=1;i<=h;i++){
        sum = 0;
        level(root,i);
        if(max < sum){
            max = sum;
        }
    }
    return max;
}

void level(Node* node, int level1){
    if(node == NULL) return;
    if(level1 == 1){
      sum += node->data;
    }
    else if(level1 > 1){
        level(node->left,level1-1);
        level(node->right,level1-1);
    }
}

int height1(Node* node){
    if(node == NULL) return 0;
    int lh = height1(node->left);
    int rh = height1(node->right);
    if(lh>rh)
    return lh+1;
    else
    return rh+1;
}


