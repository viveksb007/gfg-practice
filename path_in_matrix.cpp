#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
 {
	int t;
    cin>>t;
    while(t--){
        int i,n,j;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(n,0));
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cin>>a[i][j];
        }
        
        for(i=1;i<n;i++){
            for(j=0;j<n;j++){
               if(j == 0){
                   a[i][j] += max(a[i-1][j],a[i-1][j+1]);
               } else if(j == n-1){
                   a[i][j] += max(a[i-1][j],a[i-1][j-1]);
               } else {
                   a[i][j] += max(a[i-1][j],max(a[i-1][j-1],a[i-1][j+1]));
               }
            }
        }
        int max1 = 0;
        
        for(i=0;i<n;i++){
            if(a[n-1][i] > max1)
            max1 = a[n-1][i];
        }
        cout<<max1<<endl;
    }
	return 0;
}
