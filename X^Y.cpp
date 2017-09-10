// Check if a number can be expressed as x^y

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	bool found = false;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    found = false;
	    int i=2;
	    
	    while(! (pow(n,1.0/i) < 2)){
	        if(floor(pow(n,1.0/i)) == pow(n,1.0/i)){
	            found = true;
	            break;
	        }
	        i++;
	    }
	    if(n == 1) found = true;
	    if(found)
	    cout<<"1\n";
	    else
	    cout<<"0\n";
	}
	return 0;
}
