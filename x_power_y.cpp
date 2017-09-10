#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        long x,y;
        cin>>x>>y;
        if(x == 1 && y != 1){ 
            cout<<"0\n";
            continue;
        }
        int i=0;
        bool found = false;
        while(pow(x,i)<=y){
            if(pow(x,i)==y){
                found = true; 
                break;
            }
            i++;
        }
        if(found) 
        cout<<"1\n"; 
        else 
        cout<<"0\n";
    }
	return 0;
}
