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
        vector<int> a(n),left(n),right(n);
        for(i=0;i<n;i++) cin>>a[i];
        left[0] = a[0];
        right[n-1] = a[n-1];
        for(i=1;i<n;i++){
            left[i] = max(left[i-1],a[i]);
            right[n-i-1] = max(right[n-i],a[n-i-1]);
        }
        int ans = 0;
        for(i=0;i<n;i++)
        ans += min(left[i],right[i])-a[i];
        cout<<ans<<endl;
        
    }
	return 0;
}
