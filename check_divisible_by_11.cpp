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
        int osum = 0,esum = 0;
        for(int i=0;i<s.length();i++){
            if(i%2 == 0){
                esum += (s[i]-'0');
            }else{
                osum += (s[i]-'0');
            }
        }
        if((esum-osum)%11 == 0){
            cout<<"1\n";
        }else
        cout<<"0\n";
    }
	return 0;
}
