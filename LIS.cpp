//  Longest Increasing Subsequence (DP)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<int> inp(n),lis(n);
        for(i=0;i<n;i++){
            cin>>inp[i];
            lis[i] = 1;
        }
        for(i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(inp[j]<inp[i]){
                    lis[i] = ((lis[j]+1>lis[i])? lis[j]+1 : lis[i]);
                }
            }
        }
        int max = 1;
        for(i=0;i<n;i++){
            if(lis[i]>max)
            max = lis[i];
            
        }
       cout<<max<<"\n";
    }
	return 0;
}
