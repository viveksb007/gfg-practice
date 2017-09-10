#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,d,j;
        cin>>n>>d;
        vector<ll> a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll> yo[d];
        for(i=0;i<d;i++){
            for(j=i;j<n;j+=d){
                yo[i].push_back(a[j]);
            }
        }
        /*
        for(i=0;i<d;i++){
            for(j=0;j<yo[i].size();j++)
            cout<<yo[i][j]<<" ";
            cout<<endl;
        }
        */
        bool ans = true;
        long count = 0;
        for(i=0;i<d;i++){
            long sum = 0;
            for(j=0;j<yo[i].size();j++){
                sum += yo[i][j];
            }
            if(sum % yo[i].size() == 0){
                ll q = sum / yo[i].size();
                for(j=0;j<yo[i].size()-1;j++){
                    yo[i][j+1] += (yo[i][j]-q);
                    count += abs(yo[i][j]-q);
                    /*
                    if(yo[i][j] > q){
                        yo[i][j+1] += (yo[i][j]-q);
                        count += (yo[i][j]-q);
                    }else{
                        yo[i][j+1] -= (abs(q-yo[i][j]));
                        count += abs(q-yo[i][j]);
                    }
                    */
                }
            }else{
                ans = false; break;
            }
        }
        if(ans){
            cout<<count<<"\n";
        }else{
            cout<<"-1\n";
        }
    }
	return 0;
} 
