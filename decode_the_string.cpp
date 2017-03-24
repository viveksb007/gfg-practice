#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

string decode(string s,int k){
    int i;
    string temp = "",num = "";
    for(i=0;i<s.length();i++){
        if(s[i] == '['){
            int m = stoi(num);
            num = "";
            i++;
            string a ="";
            while(s[i] != ']'){
                a += s[i];
                i++;
            }
            temp += decode(a,m);
        }else if(s[i] >= 'a'){
            temp += s[i];
        }else{
            num += s[i];
        }
    }
    string mul = "";
    for(i=0;i<k;i++){
        mul += temp;
    }
    return mul;
}

int main()
 {
	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0;
        string num = "";
        while(s[i]!='['){ num+=s[i]; i++; }
        cout<<decode(s.substr(num.length()+1,s.length()-(2+num.length())),stoi(num))<<endl;
    }
	return 0;
}
