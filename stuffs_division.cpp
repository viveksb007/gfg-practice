#include<iostream>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        long n,i,sum=0,temp;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>temp;
            sum+=temp;
        }
        if(n*(n+1)/2 == sum) cout<<"YES\n";
        else cout<<"NO\n";
    }
	return 0;
}
