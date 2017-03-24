/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
}; */
/* Function to reverse a Doubly Linked List */
void addNode(struct Node **head_ref,int pos,int data)
{
    Node *head = *head_ref;
    int count = pos ;
    while(count--){
        head = head->next;
    }
    Node *temp = new Node;
    temp->data = data;
    Node *next = head->next;
    head->next = temp;
    temp->prev = head;
    temp->next = next;
    if(next != NULL)
    next->prev = temp;
}
