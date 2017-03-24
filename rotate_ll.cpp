/*
  Rotate a linked list after node k
  The input list will have at least one element
  Return pointer to head of rotated linked list
  Node is defined as
  struct node
  {
     int data;
     struct node *next;
  }
*/
void rotate(struct node **head_ref, int k)
{
    node *fast = *head_ref,*slow = *head_ref;
    int count = 1;
    if(k==0) return;
    while(count++ != k){
        fast = fast->next;
    }
    if(fast == NULL) return;

    if(fast->next == NULL) return;
    node *ans = fast->next;
    fast->next = NULL;
    node *temp = ans;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = *head_ref;
    *head_ref = ans;
}
