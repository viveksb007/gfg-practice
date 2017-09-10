#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i,r,sum = 0;
        cin>>n;
        vector<int> s(n),temp(n,0);
        for(i=0;i<n;i++){
            cin>>s[i];
            sum += s[i];
            if(temp[s[i]-1] == 1){
                cout<<s[i]<<" ";
                r = s[i];
            }else{
                temp[s[i]-1] = 1;
            }
        }
        cout<<n*(n+1)/2 - (sum-r)<<"\n";
        
        
    }
	return 0;
}
