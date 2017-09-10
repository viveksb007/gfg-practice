//  Next larger element

#include<iostream>
#include<vector>
using namespace std;
int main()
 {
     int t,i,temp,j;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         vector<int> inp;
         for(i=0;i<n;i++){
             cin>>temp;
             inp.push_back(temp);
         }
         for(i=0;i<n;i++){
             bool found = false;
             for(j=i+1;j<n;j++){
                 if(inp[j] > inp[i]){
                     found = true;
                     cout<<inp[j]<<' ';
                     break;
                 }
             }
             if(!found)
             cout<<-1<<' ';
         }
         cout<<endl;
     }
	return 0;
}
