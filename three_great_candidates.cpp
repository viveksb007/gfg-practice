//  Three Great Candidates

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
 {
     int t,n,temp;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int> inp;
         for(int i=0;i<n;i++){
             cin>>temp;
             inp.push_back(temp);
         }
         sort(inp.begin(),inp.begin()+inp.size());
         if(inp[0]*inp[1]*inp[inp.size()-1] > inp[inp.size()-1]*inp[inp.size()-2]*inp[inp.size()-3])
         {
             cout<<inp[0]*inp[1]*inp[inp.size()-1]<<endl;
         }else{
             cout<<inp[inp.size()-1]*inp[inp.size()-2]*inp[inp.size()-3]<<endl;
         }
     }
	return 0;
}
