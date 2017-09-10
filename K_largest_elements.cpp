#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int i,temp,n,k;
        cin>>n>>k;
        priority_queue<int> q;
        for(i=0;i<n;i++){
            cin>>temp;
            q.push(temp);
        }
        for(i=0;i<k;i++){
            cout<<q.top()<<" ";
            q.pop();
        }
        cout<<endl;
    }
	return 0;
}
