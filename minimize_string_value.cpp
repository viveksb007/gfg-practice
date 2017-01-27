// MINIMIZE STRING VALUE

#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int main() {
	int t,k,i,j,sum;
	cin>>t;
	while(t--){
	    string inp;
	    cin>>inp>>k;
	    if(k<inp.length()){
	    int freq[26];
	    for(i=0;i<26;i++)freq[i] = 0;
	    for(i=0;i<inp.length();i++){
	        freq[inp[i]-97]++;
	    }
	    vector<int> a;
	    for(i=0;i<26;i++){
	        if(freq[i]!=0){
	            a.push_back(freq[i]);
	        }
	    }
	    for(i=0;i<k;i++){
	        int max = 0,pos = 0;
	        for(j=0;j<a.size();j++){
	            if(max < a[j]) {max = a[j]; pos = j;}
	        }
	        a[pos]--;
	    }
	    sum = 0;
	    for(i=0;i<a.size();i++){
	        sum += pow(a[i],2);
	    }}else{
	        sum = 0;
	    }
	    
	    cout<<sum<<"\n";
	    
	}
	return 0;
}
