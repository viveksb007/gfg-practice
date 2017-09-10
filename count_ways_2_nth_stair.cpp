#include<iostream>
using namespace std;

int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y = 0,count = 0;
        while(n-(2*y) >= 0){
            count++; y++;
        }
        cout<<count<<endl;
    }
	return 0;
}
