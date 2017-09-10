#include<iostream>
using namespace std;

int main()
 {
	int t;
    cin>>t;
    while(t--){
        long n,i;
        cin>>n;
        long a = 1,b = 1,c;
        for(i=0;i<n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        cout<<b<<endl;
    }
	return 0;
}
