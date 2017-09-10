//  Longest Prefix Suffix

#include<iostream>
#include<string>
using namespace std;
int main()
 {
    int t;
    long i,n;
    cin>>t;
    while(t--){
        string inp,tempf,tempb;
        cin>>inp;
        n = inp.length();
        long max = 0;
        for(i=0;i<inp.length()-1;i++){
            tempf = inp.substr(0,i+1);
            tempb = inp.substr(n-1-i,i+1);
            if(tempf.compare(tempb) == 0){
                max = tempf.length();
            }
        }
        cout<<max<<endl;
    }
	return 0;
}
