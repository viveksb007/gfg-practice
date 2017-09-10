/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method*/
Node * deleteK(Node *head,int K)
{
    if(K == 0)return head;
    if(K == 1)return NULL;
    Node *ans = head;
    Node *prev = head;
    int count = 0;
    while(head != NULL){
        count++;
        if(count == K){
            count = 0;
            prev->next = head->next;
            head = head->next;
        }else{
            prev = head;
            head = head->next;
        }
    }
    return ans;
}

