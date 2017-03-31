#include<iostream>
#include<vector>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n,sum = 0,i,j,temp_sum = 0;
        cin>>n;
        vector<int> s(n);
        for(i=0;i<n;i++) cin>>s[i];
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                temp_sum ^= s[j];
                sum ^= temp_sum;
            }
            temp_sum = 0;
        }
        cout<<sum<<endl;
    }
	return 0;
}
