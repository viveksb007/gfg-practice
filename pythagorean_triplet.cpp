#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i,temp;
        bool found = false;
        cin>>n;
        vector<int> a(n);
        for(i=0;i<n;i++){
            cin>>temp;
            a[i] = temp*temp;
        }
        sort(a.begin(),a.begin()+n);
        for(i=n-1;i>=0;i--){
            int l = 0,h = i-1;
            while(l<h){
                if(a[l]+a[h] == a[i]){
                    found = true;
                    break;
                }else if(a[l]+a[h] > a[i]){
                    h--;
                }else{
                    l++;
                }
            }
            if(found)
            break;
        }
        if(found)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
	return 0;
}
