#include<iostream>
#include<vector>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int i,n,x,j;
        bool found = false;
        cin>>n>>x;
        vector<int> a(n);
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]+a[j] == x){
                    found = true;
                    break;
                }
            }
            if(found)
            break;
        }
        if(found) cout<<"Yes\n";
        else cout<<"No\n";
    }
	return 0;
}
