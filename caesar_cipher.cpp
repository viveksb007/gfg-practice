#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n,k;
    string inp;
    cin>>n>>inp>>k;
    for(int i=0;i<inp.length();i++){
        if((inp[i]>=65)&&(inp[i]<=90)){
            inp[i]+=k;
           
            while(!((inp[i]>=65)&&(inp[i]<=90))){
                inp[i]-=26;
            }
        }else if((inp[i]>=97)&&(inp[i]<=122)){
            inp[i]+=k;
            
            while(!((inp[i]>=97)&&(inp[i]<=122))){
                inp[i]-=26;
                
            }
        }else
            continue;
        
    }
    cout<<inp;
    
    return 0;
}

