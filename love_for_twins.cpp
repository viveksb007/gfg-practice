#include<iostream>
#include<map>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i,temp,count = 0;
        cin>>n;
        map<int,int>m;
        for(i=0;i<n;i++){
            cin>>temp;
            if(m.find(temp) == m.end()){
                m.insert(pair<int,int>(temp,1));
            }else{
                count++;
                m.erase(temp);
            }
        }
        cout<<count*2<<"\n";
    }
	return 0;
}
