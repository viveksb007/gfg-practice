#include<iostream>
#include<vector>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,m,i,j,x;
        bool found = false;
        cin>>n>>m;
        vector<vector<int>> mat(n,vector<int>(m));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
        cin>>x;
        i = 0; j = m-1;
        while(i<n && j >= 0){
            if(x == mat[i][j]){
                found = true;
                break;
            }else if(mat[i][j] > x)
            j--;
            else
            i++;
        }
        if(found){
            cout<<"1\n";
        }else
        cout<<"0\n";
    }
	return 0;
}
