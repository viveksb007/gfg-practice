#include<iostream>
#include<map>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int i,n,temp;
        bool found = false;
        map<int,int> m;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>temp;
            if(m.find(temp) != m.end()){
                m[temp]++;
            }else{
                m.insert(pair<int,int>(temp,1));
            }
        }
        map<int,int>::iterator it;
        for(it = m.begin();it != m.end();++it){
            if(it->second > n/2){
                found = true;
                cout<<it->first<<endl;
                break;
            }
        }
        if(!found) cout<<"NO Majority Element\n";
    }
	return 0;
}
