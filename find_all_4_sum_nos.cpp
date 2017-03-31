#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<tuple>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,k,i,j;
        bool found = false;
        cin>>n>>k;
        vector<int> inp(n);
        map<tuple<int,int,int,int>,int> ans;
        map<tuple<int,int,int,int>,int>::iterator it;
        for(i=0;i<n;i++) cin>>inp[i];
        sort(inp.begin(),inp.begin()+inp.size());
        for(i=0;i<n-2;i++){
            for(j=i+1;j<n-1;j++){
                int pos = n-1,neg = j+1;
                while(pos > neg){
                    if(inp[i]+inp[j]+inp[pos]+inp[neg] == k){
                       // cout<<inp[i]<<" "<<inp[j]<<" "<<inp[neg]<<" "<<inp[pos]<<" $";
                        ans.insert(pair<tuple<int,int,int,int>,int>(make_tuple(inp[i],inp[j],inp[neg],inp[pos]),0));
                        neg++;
                        found = true;
                    }else if(inp[i]+inp[j]+inp[pos]+inp[neg] > k){
                        pos--;
                    }else{
                        neg++;
                    }
                }
            }
        }
        for(it = ans.begin();it!= ans.end();it++){
            cout<<get<0>(it->first)<<" "<<get<1>(it->first)<<" "<<get<2>(it->first)<<" "<<get<3>(it->first)<<" $";
        }
        if(!found)cout<<"-1";
        cout<<"\n";
    }
	return 0;
}
