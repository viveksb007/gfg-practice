//  Pattern Searching

#include<iostream>
#include<string>
using namespace std;
int main()
 {
    int t,i,j,k;
    cin>>t;
    while(t--){
        string inp,pat;
        cin>>inp>>pat;
        bool found = false;
        for(i=0;i<inp.length();i++){
            if(inp[i]==pat[0]){
                found = true;
                for(j=i,k=0;k<pat.length();j++,k++){
                    if(inp[j]!=pat[k]){
                        found = false;
                        break;
                    }
                }
            }
            if(found){
                cout<<"found\n";
                break;
            }
        }
        if(!found) cout<<"not found\n";
        
    }
	return 0;
}
