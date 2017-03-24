#include<iostream>
#include<set>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,temp,i;
        set<int> inp;
        cin>>n;
        for(i=0;i<n-1;i++){
            cin>>temp;
            inp.insert(temp);
        }
        int sum = 0;
        set<int>::iterator it;
        for(it = inp.begin();it != inp.end();++it){
            sum += (*it);
        }
        cout<<(n*(n+1)/2)-sum<<"\n";
    }
	return 0;
}
