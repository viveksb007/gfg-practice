/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
  struct node
  {
     int data;
     struct Node *next;
  }
*/
#include<queue>
struct node *reverse (struct node *head, int k)
{ 
    queue<node*> q;
    node *prev = NULL,*current = head,*next,*ans;
    bool got = false;
    int count = 0;
    while(current != NULL){
        count++;
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        if(count == k){
            count = 0;
            q.push(prev);
            prev = NULL;
        }
    }
    if(count!=0) q.push(prev);
    if(q.empty()) return prev;
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(!got){
            ans = temp;
            got = true;
        }
        while(temp->next != NULL){
            temp = temp->next;
        }
        if(!q.empty()){
            temp->next = q.front();
        }
    }
    return ans;
}

