#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

void permutUtil(string s, int freq[],int level){
    
    if(level == s.length()){
        cout<<s<<" ";
        return;
    }
    
    int i;
    
    for(i = 0;i<26;i++){
        if(freq[i]>0){
            freq[i]--;
            char temp = s[level];
            s[level] = (i + 'A');
            permutUtil(s,freq,level+1);
            s[level] = temp;
            freq[i]++;
        }
    }
}

void permut(string s){
    int freq[26],i;
    for(i=0;i<26;i++) freq[i] = 0;
    for(i=0;i<s.length();i++){
        freq[s[i]-'A']++;
    }
    permutUtil(s,freq,0);
}

int main()
 {
	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        permut(s);
        cout<<endl;
    }
	return 0;
}
