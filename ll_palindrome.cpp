/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/

/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    bool odd = false;
    Node *slow = head,*fast = head;
    Node *prev = NULL,*current = head,*next;
    while(fast != NULL){
        if(fast->next != NULL)
        fast = fast->next->next;
        else{
            fast = NULL;
            odd = true;

        }
        slow = slow->next;

        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    if(odd)
    prev = prev->next;

    while((prev != NULL)&&(slow != NULL)){
        if(prev->data != slow->data)
        return false;
        else{
            prev = prev->next;
            slow = slow->next;
        }
    }
    return true;
}
