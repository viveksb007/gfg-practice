/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

void sortList(Node** head)
{
    Node *i = *head,*j;
    
    while(i != NULL){
        j = i->next;
        while(j != NULL){
            if(i->data > j->data){
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
}
