// Finding the numbers

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef unsigned long long ull;

int main() {
	ull t,i,n,temp,j;
	cin>>t;
	while(t--){
	    cin>>i;
	    n = 2*i+2;
	    map<ull,int> inp;
	    for(i=0;i<n;i++){
	        cin>>temp;
	        map<ull,int>::iterator it;
	        it = inp.find(temp);
	        if(it!=inp.end()){
	            inp.erase(it);
	        }else{
	            inp.insert(pair<ull,int>(temp,1));
	        }
	    }
	    map<ull,int>::iterator it;
	    for(it = inp.begin();it!=inp.end();++it)
	    {
	        cout<<it->first<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
