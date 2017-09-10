// https://www.hackerrank.com/challenges/acm-icpc-team

#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n,m,i,j,k;
    cin>>n>>m;
    vector<string> inp(n);
    int max=0,max_team=0;
    for(i=0;i<n;i++){
        cin>>inp[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            int c=0;
            for(k=0;k<m;k++){
                if((inp[i][k]=='0') && (inp[j][k]=='0')){
                    
                }else
                    c++;
            }
            if(c > max){
                max = c;
                max_team = 1;
            }else if(c == max){
                max_team++;
            }
        }
    }
    cout<<max<<"\n"<<max_team;
    return 0;
}

