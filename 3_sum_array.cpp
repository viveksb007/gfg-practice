// Triplet Sum in Array

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	bool found = false;
	cin>>t;
	while(t--){
	    int n,x;
	    int a[200];
	    cin>>n>>x;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    found = false;
	    for(int i=0;i<n-2;i++){
	        int l = i+1;
	        int r = n-1;
	        while(l<r){
	            if(a[i]+a[l]+a[r]==x){
	                found = true;
	                cout<<"1\n";
	                break;
	            }else if(a[i]+a[l]+a[r]<x){
	                l++;
	            }else{
	                r--;
	            }
	        }
	        if(found){
	            break;
	        }
	    }
	    if(!found){
	        cout<<"0\n";
	    }
	}
	return 0;
}
