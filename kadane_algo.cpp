#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<int> a(n);
        for(i=0;i<n;i++) cin>>a[i];
        int sum = a[0],temp = a[0];
        for(i=1;i<n;i++){
            temp = max(a[i],temp+a[i]);
            sum = max(sum,temp);
        }
        cout<<sum<<endl;
    }
	return 0;
}
