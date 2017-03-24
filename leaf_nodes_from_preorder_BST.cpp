//  http://www.practice.geeksforgeeks.org/problem-page.php?pid=1663

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i,a;
        cin>>n;
        vector<int> inp(n);
        stack<int> temp;
        for(i=0;i<n;i++) cin>>inp[i];
        temp.push(inp[0]);
        for(i=1;i<n;i++){
            if(temp.top() > inp[i]){
                temp.push(inp[i]);
            }else{
                a = temp.top();
                temp.pop();
                if(!temp.empty())
                if(temp.top() < inp[i]) 
                    cout<<a<<" ";
                while((!temp.empty())&&(temp.top() < inp[i])){
                    temp.pop();
                }
                temp.push(inp[i]);
            }
        }
        cout<<temp.top();
        cout<<"\n";
    }
	return 0;
}
