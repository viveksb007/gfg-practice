#include<iostream>
#include<vector>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i,temp = 0;
        cin>>n;
        vector<int> a(2*n+2);
        for(i=0;i<(2*n+2);i++){
            cin>>a[i];
            temp ^= a[i];
        }
        
        i=0;
        for(;i<31;i++){
            if(temp & (1u << i)){
                break;
            }
        }
        int j,temp1 = 0,temp2 = 0;
        for(j=0;j<(2*n+2);j++){
            if(a[j] & (1u << i)){
                temp1 ^= a[j];
            }else{
                temp2 ^= a[j];
            }
        }
        if(temp1 > temp2){
            cout<<temp2<<" "<<temp1<<"\n";
        }else{
            cout<<temp1<<" "<<temp2<<"\n";
        }
    }
	return 0;
}
