//  Minimums in Array

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i;
        long mina = 100001,mina1=100001,minb1=100001,minb = 100001,posa,posb;
        cin>>n;
        if(n==1){ cout<<"-1\n"; continue;}
        vector<int> a(n),b(n);
        for(i=0;i<n;i++){
          cin>>a[i];
          if(a[i]<mina) {
              mina1 = mina;
              mina = a[i];
              posa = i;
          }else if(a[i]<mina1 && a[i]!=mina)
            mina1 = a[i];
        } 
        for(i=0;i<n;i++){
          cin>>b[i];
          if(b[i]<minb) {
              minb1 = minb;
              minb = b[i];
              posb = i;
          }else if(b[i]<minb1 && b[i]!=minb)
            minb1 = b[i];
        } 
        if(posa!=posb)
        cout<<mina+minb<<"\n";
        else{
            cout<<min(mina+minb1,minb+mina1)<<"\n";
        }
        
        
    }
	return 0;
}
