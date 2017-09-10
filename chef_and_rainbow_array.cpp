#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<int> a(n),k,f;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        i=0;
        int temp = a[i++],count = 1;
        while(i<n){
            if(a[i] == temp){
                count++;
            }else{
                k.push_back(temp);
                f.push_back(count);
                temp = a[i];
                count = 1;
            }
            i++;
        }
        k.push_back(temp);
        f.push_back(count);
        bool ans = true;
        int n1 = k.size();
        for(i=0;i<k.size()/2;i++){
            if(k[i] != k[n1-1-i] || f[i] != f[n1-1-i]){
                ans = false; break;
            }
        }
        if(ans){
            if(k[6] != 7)
            ans = false;
        }
        /*
        for(i=0;i<k.size();i++){
            cout<<k[i]<<" "<<f[i]<<endl;
        }
        */
        if(ans)
        cout<<"yes\n";
        else
        cout<<"no\n";
        
    }
	return 0;
}

