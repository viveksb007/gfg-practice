#include<iostream>
#include<vector>
#include<sstream>
#include<string>

using namespace std;

int main()
 {
	int t;
    cin>>t;
    while(t--){
        string s,s1,word;
        int i,n,j,p;
        cin>>n;
        getline(cin,s);
        vector<string> dict;
        getline(cin,s);
        istringstream iss(s);
        while(iss>>word){
            dict.push_back(word);
        }
        getline(cin,s1);
        
        int max = 0,pos = 0;
        for(i=0;i<n;i++){
            for(j=0,p=0;j<s1.length();j++){
                if(p > dict[i].length()-1) break;
                if(dict[i][p] == s1[j]){
                    p++;
                }
            }
            if(p == dict[i].length()){
                if(p > max){ 
                    max = p;
                    pos = i;
                }
            }
        }
        cout<<dict[pos]<<"\n";
        
    }
	return 0;
}
