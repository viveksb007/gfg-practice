/* Link list Node
struct Node
{
    int data;
    Node* next;
};*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    int count = 0;
    Node *current = head,*prev = head;
    while(current != NULL){
        if(x == 1){
            head = head->next;
            break;
        }else if(++count == x){
            prev->next = current->next;
            break;
        }else{
            prev = current;
            current = current->next;
        }
    }
    return head;
}
