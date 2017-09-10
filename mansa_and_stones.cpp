//  https://www.hackerrank.com/challenges/manasa-and-stones

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++){
            if(a<b)
                cout<<((n-i-1)*a)+(i*b)<<" ";
            else if(b<a)
                cout<<(i*a)+((n-1-i)*b)<<" ";
            else {
                cout<<(n-1)*a;
                break;
            }
        }
        cout<<"\n";
    }
    return 0;
}

