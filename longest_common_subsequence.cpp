//  Longest Common Subsequence (DP)

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int l1,l2,i,j;
        string s1,s2;
        cin>>l1>>l2>>s1>>s2;
        int ans[101][101] = {0};
        int max1 = 0;
        for(i=1;i<=l1;i++){
            for(j=1;j<=l2;j++){
                if(s1[i-1] == s2[j-1]){
                    ans[i][j] = ans[i-1][j-1] + 1; 
                }else{
                    ans[i][j] = max(ans[i-1][j],ans[i][j-1]);
                }
                if(ans[i][j]>max1){
                    max1 = ans[i][j];
                }
            }
        }
        cout<<max1<<"\n";
    }
	return 0;
}
