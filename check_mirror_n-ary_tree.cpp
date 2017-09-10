#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
int compare(vector<stack<int>> &a,vector<queue<int>> &b,int n){
    int i,j;
    for(i=0;i<n;i++){
        if(a[i].size() != 0){
            while(!a[i].empty()){
                if(a[i].top() != b[i].front())
                return 0;
                else{
                    a[i].pop();
                    b[i].pop();
                }
            }
        }
    }
    return 1;
}
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int i,j,n,e;
        bool mirror = true;
        cin>>n>>e;
        vector<stack<int>> a(n+1);
        vector<queue<int>> b(n+1);
        int ta,tb;
        for(i=0;i<e;i++){
            cin>>ta>>tb;
            a[ta].push(tb);
        }
        for(i=0;i<e;i++){
            cin>>ta>>tb;
            b[ta].push(tb);
        }
        cout<<compare(a,b,n+1)<<endl;
    }
	return 0;
}
