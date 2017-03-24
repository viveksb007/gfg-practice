#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        ll n,i,j,sum,x,min;
        cin>>n>>x;
        vector<ll> a(n);
        for(i=0;i<n;i++) cin>>a[i];
        min = n;
        for(i=0;i<n;i++){
            sum = 0;
            for(j=i;j<n;j++){
                sum += a[j];
                if(sum > x){
                    if(j-i+1 < min){
                        min = j-i+1;
                    }
                    break;
                }
            }
        }
        cout<<min<<"\n";
    }
	return 0;
}
