//  Queue using two Stacks

/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        // Your Code
        s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        // Your Code   
        if(s1.size()==0) return -1;
        int n=s1.size();
        for(int i=0;i<n;i++){
            s2.push(s1.top());
            s1.pop();
        }
        int top = s2.top();
        s2.pop();
        n = s2.size();
        for(int i=0;i<n;i++){
            s1.push(s2.top());
            s2.pop();
        }
        return top;
}

