//  0 - 1 Knapsack Problem

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
 {
	int t,i,j;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        vector<int> val(n),wgt(n);
        for(i=0;i<n;i++) cin>>val[i];
        for(i=0;i<n;i++) cin>>wgt[i];
        int k[101][101];
        for(i=0;i<=n;i++){
            for(j=0;j<=w;j++){
                if(i==0||j==0) k[i][j] = 0;
                else if(wgt[i-1] <= j){
                    k[i][j] = max(val[i-1]+k[i-1][j-wgt[i-1]],k[i-1][j]);
                }else{
                    k[i][j] = k[i-1][j];
                }
            }
        }
        cout<<k[n][w]<<"\n";
    }
	return 0;
}
