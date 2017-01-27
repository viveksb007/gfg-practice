// Equilibrium Point 
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a[100],sum_f=0,sum_l=0,i;
	    bool found = false;
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        sum_l += a[i];
	    }
	    for(i=0;i<n-1;i++){
	        sum_l -= a[i];
	        if(sum_f == sum_l){
	            found = true;
	            break;
	        }
	        sum_f += a[i];
	    }
	    if(n == 1) {found=true; i=0;}
	    if(found)
	    cout<<i+1<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
