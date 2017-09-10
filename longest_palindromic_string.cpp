#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int lcsdp(string s1,string s2, int m,int n){
    vector<vector<int>> mat(m+1,vector<int>(n+1,0));
    int i,j,k;
    for(i=1;i<=m;i++){
        for(j=1,k=1;j<=n;j++,k++){
            if(s1[i-1] == s2[n-k]){
                mat[i][j] = 1 + mat[i-1][j-1];
            }else{
                mat[i][j] = max(mat[i-1][j],mat[i][j-1]);
            }
        }
    }
    return mat[m][n];
}

int main()
 {
	int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        //s2 = s1;
        //reverse(s2.begin(),s2.end());
        cout<<lcsdp(s1,s1,s1.length(),s1.length())<<endl;
    }
	return 0;
}
