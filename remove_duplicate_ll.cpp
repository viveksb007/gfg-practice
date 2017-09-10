/*The structure of linked list is the following
struct Node
{
int data;
Node* next;
};*/
Node *removeDuplicates(Node *root)
{
    Node *ans = root;
    while(root->next != NULL){
        if(root->data == root->next->data){
               root->next = root->next->next;
        }else
        root = root->next;
    }
    return ans;
}
