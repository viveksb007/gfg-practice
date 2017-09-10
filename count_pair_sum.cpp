#include<iostream>
#include<vector> 
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int m,n,i,j,count = 0,x;
        cin>>m>>n;
        vector<int> a(m),b(n);
        for(i=0;i<m;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];
        cin>>x;
        for(i=0;i<n;i++){
            for(j=m-1;j>=0;j--){
                if(b[i]+a[j]>x) continue;
                if(b[i]+a[j]==x){
                    count++; break;
                } 
                if(b[i]+a[j]<x) break;
            }
        }
        cout<<count<<"\n";
    }
	return 0;
}
