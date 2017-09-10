vector<int> ans;
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    ans.push_back(root->data);
    inorder(root->right);
}

   bool checkBST(Node* root) {
       inorder(root);
       for(int i=0;i<ans.size()-1;i++){
           if(ans[i]>=ans[i+1])
               return false;
       }
       return true;
   }
