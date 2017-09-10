#include <cmath>
#include <queue>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
   int data;
   node *left;
   node *right;
};

void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int lengthTree(node* root){
    if(root == NULL) return 0;
    int l = lengthTree(root->left);
    int r = lengthTree(root->right);
    if(l>r) return l+1;
    else return r+1;
}

void swapAtK(node* root,int k){
    if(root == NULL) return;
    if(k == 1){
        node *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }else{
        swapAtK(root->left,k-1);
        swapAtK(root->right,k-1);
    }
}

int main() {
    int i,n,a,b;
    cin>>n;
    node *root = new node();
    root->data = 1;
    root->left = NULL; root->right = NULL;
    queue<node*> q;
    q.push(root);
    for(i=0;i<n;i++){
        cin>>a>>b;
        if(a == -1 && b == -1){ q.pop(); continue; } 
        node *yo;
        if(a != -1 && b != -1){
            node *t1 = new node();
            t1->data = a;
            t1->left = NULL; t1->right = NULL;
            yo = q.front();
            q.pop();
            yo->left = t1;
            q.push(t1);
            node *t2 = new node();
            t2->data = b;
            t2->left = NULL; t2->right = NULL;
            yo->right = t2;
            q.push(t2);
        }else if(a != -1){
            node *t1 = new node();
            t1->data = a;
            t1->left = NULL; t1->right = NULL;
            yo = q.front();
            q.pop();
            yo->left = t1;
            q.push(t1);
        }else{
            node *t1 = new node();
            t1->data = b;
            t1->left = NULL; t1->right = NULL;
            yo = q.front();
            q.pop();
            yo->right = t1;
            q.push(t1);
        }
    }
    int t,k;
    int l = lengthTree(root);
    cin>>t;
    for(i=0;i<t;i++){
        cin>>k;
        int p = 1;
        while(p*k <= l){
            swapAtK(root,p*k);
            p++;
        }
        inorder(root);
        cout<<endl;
    }
    return 0;
}

