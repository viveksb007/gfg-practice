#include<iostream>
using namespace std;

int countSetBits(int n){
    int i=0,count = 0;
    for(i=0;i<31;i++){
        if(n & (1u<<i)) count++;
    }
    return count;
}

int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool found = true;
        int temp = n;
        n--;
        int i = 0;
        while(n>0 && i<32){
            i++;
            if(n+countSetBits(n) == temp){
                found = false;
                break;
            }
            n--;
        }
        if(found)
        cout<<"1\n";
        else
        cout<<"0\n";
    }
	return 0;
}
