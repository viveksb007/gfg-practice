#include<iostream>
#include<vector>
using namespace std;

int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,f,l,i,x;
        bool found = false;
        cin>>n;
        vector<int> a(n);
        for(i=0;i<n;i++) cin>>a[i];
        cin>>x;
        int lh = 0,rh = n-1,mid;
        while(lh<=rh){
            mid = (lh+rh)/2;
            if(a[mid] == x){
                found = true;
                break;
            }
            if(a[mid] > x){
                rh = mid-1;
            }else{
                lh = mid+1;
            }
        }
        if(!found){
            cout<<-1<<"\n";
        }else{
        int temp = mid-1;
        while(a[temp] == x){
            temp--;
        }
        f = temp+1;
        temp = mid+1;
        while(a[temp] == x){
            temp++;
        }
        l = temp-1;
        cout<<f<<' '<<l<<"\n";
        }
    }
	return 0;
}
