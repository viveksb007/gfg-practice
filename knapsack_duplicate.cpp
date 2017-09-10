//  Knapsack with Duplicate Items

#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,w,i,j;
        cin>>n>>w;
        vector<int> val(n),wgt(n);
        for(i=0;i<n;i++) cin>>val[i];
        for(i=0;i<n;i++) cin>>wgt[i];
        vector<int> dt(w+1,0);
        for(i=0;i<=w;i++){
            for(j=0;j<n;j++){
                if(wgt[j] <= i){
                    dt[i] = max(dt[i],val[j]+dt[i-wgt[j]]);
                }
            }
        }
        cout<<dt[w]<<"\n";
    }
	return 0;
}
