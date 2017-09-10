//  Maximize Number of 1's

#include<iostream>
#include<vector>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
     int n,i,j,m;
     cin>>n;
     vector<int> inp(n);
     for(i=0;i<n;i++) cin>>inp[i];
     cin>>m;
     int wL=0,wR=0,zeroCount=0,ans=0;
     while(wR<n){
         if(zeroCount<=m){
             if(inp[wR]==0)
                zeroCount++;
             wR++;
         }
         if(zeroCount>m){
             if(inp[wL]==0)
                zeroCount--;
            wL++;
         }
         if(ans<(wR-wL)){
             ans = wR-wL;
         }
     }
     cout<<ans<<"\n";
    }
	return 0;
}
