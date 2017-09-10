#include<iostream>
#include<vector> 
using namespace std;


int main()
 {
	int t;
    cin>>t;
    while(t--){
       int n,i,k,j;
       cin>>n;
       vector<int> inp(n);
       for(i=0;i<n;i++) cin>>inp[i];
       cin>>k;
       vector<vector<int>> sum(n+1,vector<int>(k+1,0));
       for(i=0;i<=n;i++) sum[i][0] = 1;
       
       for(i=1;i<=n;i++){
           for(j=1;j<=k;j++){
               if(inp[i-1] > j)
               sum[i][j] = sum[i-1][j];
               else{
                   sum[i][j] = sum[i-1][j] + sum[i-1][j-inp[i-1]];
               }
           }
       }
       
       cout<<sum[n][k]<<"\n";
       
    }
	return 0;
}
