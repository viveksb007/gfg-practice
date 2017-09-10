#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,m,i;
        cin>>n>>m;
        bool ans = true;
        vector<int> a(n),b(m);
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<m;i++) cin>>b[i];
        if(b.size()>a.size()){
            cout<<"No\n";
        }else{
            map<int,int> f,u;
            for(i=0;i<n;i++){
                if(f.find(a[i]) != f.end())
                f[a[i]]++;
                else{
                    f.insert(pair<int,int>(a[i],1));
                }
            }
            for(i=0;i<m;i++){
                if(u.find(b[i]) != u.end())
                u[a[i]]++;
                else{
                    u.insert(pair<int,int>(b[i],1));
                }
            }
            for(auto it = u.begin();it != u.end(); it++){
                if(f.find(it->first) == f.end()){
                    ans = false;
                    break;
                }else{
                    if(it->second > f[it->first]){
                        ans = false;
                        break;
                    }
                }
            }
            if(ans)
            cout<<"Yes\n";
            else
            cout<<"No\n";
        }
    }
	return 0;
}
