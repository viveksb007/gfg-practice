/* Link list Node
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/
Node* deleteAllOccurances(Node *head,int x)
{
    bool first = true;
    Node *prev = head,*current = head;
    while(current != NULL){
        if(current->data == x){
            if(first){
                head = head->next;
            }
            prev->next = current->next;
            current = prev->next;
        }else{
            first = false;
            prev = current;
            current = current->next;
        }
    }
    return head;
}
