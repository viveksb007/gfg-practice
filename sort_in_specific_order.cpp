#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool myfun(int i,int j){
    return (i>j);
}
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i,temp;
        cin>>n;
        vector<int> a(n),odd,even;
        for(i=0;i<n;i++) cin>>a[i];
        int check = 0;
        for(i=0;i<n;i++){
            if(a[i]%2 != 0){
                odd.push_back(a[i]);
            }else{
                even.push_back(a[i]);
            }
        }
        sort(odd.begin(),odd.begin()+odd.size(),myfun);
        sort(even.begin(),even.begin()+even.size());
        for(i=0;i<odd.size();i++){ cout<<odd[i]<<" ";}
        for(i=0;i<even.size();i++){ cout<<even[i]<<" ";}
        cout<<"\n";
    }
	return 0;
}
