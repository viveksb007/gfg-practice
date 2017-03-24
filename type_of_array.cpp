#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        ll n,i,temp,max = 0;
        int an = 0,dn = 0;
        bool ar = false,dr = false,a = false, d = false;
        cin>>n;
        vector<ll> ans(n);
        for(i=0;i<n;i++) cin>>ans[i];
        for(i=0;i<n-1;i++){
            if(ans[i]>max) max = ans[i];
            if(ans[i] < ans[i+1]){ a = true; an++;}
            else if(ans[i] > ans[i+1]){ d = true; dn++;}
        }
        if(ans[n-1]>max) max = ans[n-1];
        if(a && d){
            if(an>dn) cout<<max<<' '<<4<<"\n";
            else cout<<max<<' '<<3<<"\n";
        }
        else{
            if(a)
            cout<<max<<' '<<1<<"\n";
            else
            cout<<max<<' '<<2<<"\n";
        }
    }
	return 0;
}
