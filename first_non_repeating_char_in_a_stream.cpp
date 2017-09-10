#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        char s;
        map<char,int> m;
        vector<char> track;
        for(i=0;i<n;i++){
            cin>>s;
            if(m.find(s) == m.end()){
                track.push_back(s);
                m.insert(pair<char,int>(s,1));
                cout<<track[0]<<" ";
            }else{
                for(int j=0;j<track.size();j++){
                    if(track[j] == s){
                        track.erase(track.begin()+j);
                        break;
                    }
                }
                if(track.size() != 0)
                cout<<track[0]<<" ";
                else
                cout<<"-1 ";
            }
        }
        cout<<endl;
    }
	return 0;
}
