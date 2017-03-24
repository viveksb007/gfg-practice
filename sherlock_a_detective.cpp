#include<iostream>
#include<vector>
using namespace std;
typedef unsigned long long ull;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        ull n,i,temp;
        cin>>n;
        vector<bool> ans(n+1);
        for(i=1;i<=n;i++) ans[i] = true;
        for(i=1;i<=n;i++){
            cin>>temp;
            ans[temp] = false;
        }
        for(i=1;i<=n;i++){
            if(ans[i]) cout<<i<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
