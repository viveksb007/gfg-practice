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
        vector<int> a(n);
        int inc,exc,temp;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        inc = a[0];
        exc = 0;
        for(i=1;i<n;i++){
            temp = max(inc,exc);
            
            inc = exc + a[i];
            exc = temp;
        }
        cout<<max(inc,exc)<<endl;
    }
	return 0;
}
