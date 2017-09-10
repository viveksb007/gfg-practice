#include<iostream>
#include<string>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0,rem;
        if(s[0] == '0') rem = 0;
        else rem = 1;
        for(i=1;i<s.length();i++){
            switch(rem){
                case 0:
                if(s[i] == '1') rem = 1;
                break;
                case 1:
                if(s[i] == '1') rem = 0;
                else rem = 2;
                break;
                case 2:
                if(s[i] == '0') rem = 1;
                break;
            }
        }
        if(rem == 0) cout<<"1\n";
        else cout<<"0\n";
    }
	return 0;
}
