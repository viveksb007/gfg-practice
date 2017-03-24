#include<iostream>
#include<vector>

using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<int> inp(n);
        for(i=0;i<n;i++) cin>>inp[i];
        int count = 0;
        for(i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(inp[i] > inp[j]) count++;
        }
        cout<<count<<"\n";
    }
	return 0;
}
