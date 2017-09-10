#include<iostream>
#include<algorithm>
using namespace std;

int knapsack(vector<int> val,vector<int> wt,int n, int w){
    if(n == 0 || w == 0) return 0;
    if(wt[n-1]>w) return knapsack(val,wt,n-1,w);
    return max(val[n-1] + knapsack(val,wt,n-1,w-wt[n-1]),knapsack(val,wt,n-1,w));
}

int knapsackdp(vector<int> val,vector<int> wt,int n,int w){
    vector<vector<int>> mat(n+1,vector<int>(w+1,0)); 
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=w;j++){
            if(wt[i-1]>j){
                mat[i][j] = mat[i-1][j];
            }else{
                mat[i][j] = max(val[i-1]+mat[i-1][j-wt[i-1]],mat[i-1][j]);
            }
        }
    }
    return mat[n][w];
}

int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,w,i;
        cin>>n>>w;
        vector<int> val(n),wt(n);
        for(i=0;i<n;i++) cin>>val[i];
        for(i=0;i<n;i++) cin>>wt[i];
        cout<<knapsackdp(val,wt,n,w)<<endl;
    }
	return 0;
}
