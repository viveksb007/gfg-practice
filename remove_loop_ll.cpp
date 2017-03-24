/*The structure of linked list is the following
struct Node
{
int data;
Node* next; 
};*/

/*The function removes the loop from the linked list if present
You are required to complete this method*/
#include<map>
void removeTheLoop(Node *node)
{
    map<Node*,int> temp;
    Node *prev = node;
    map<Node*,int>::iterator it;
    while(node != NULL){
        if(temp.find(node) != temp.end()){
            prev->next = NULL;
            break;
        }else{
            temp.insert(pair<Node*,int>(node,1));
            prev = node;
            node = node->next;
        }
    }
}

