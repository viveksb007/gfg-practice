// MAX VALUE

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int t,a[200];
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int max = 0,max1 = 0;
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(abs(a[i]-a[j]-i+j) > max){
	                max = a[i]-a[j]-i+j;
	            }
	            if(abs(a[n-1-i]-a[n-1-j]-i+j) > max1){
	                max1 = a[n-1-i]-a[n-1-j]-(n-1-i)+(n-1-j);
	            }
	        }
	    }
	    if(max>max1)
	    cout<<max<<endl;
	    else
	    cout<<max1<<endl;
	}
	return 0;
}
