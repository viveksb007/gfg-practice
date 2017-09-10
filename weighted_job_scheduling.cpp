#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct job{
    int starttime;
    int endtime;
    int value;
};

bool ccomp(job i,job j){
    if(i.endtime > j.endtime)
    return false;
    return true;
}

int latestNonConflict(vector<job> arr,int i){
    for(int j = i-1;j>=0;j--){
        if(arr[j].endtime <= arr[i-1].starttime)
        return j;
    }
    return -1;
}

int maxprofit(vector<job> arr,int n){
    
    int i;
    vector<int> table(n);
    table[0] = arr[0].value;
    for(i=1;i<n;i++){
        int incl = arr[i].value;
        int l = latestNonConflict(arr,i);
        if(l != -1) incl += table[l];
        
        table[i] = max(incl,table[i-1]);
    }
    return table[n-1];
}

int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<job> arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i].starttime>>arr[i].endtime>>arr[i].value;
        }
        sort(arr.begin(),arr.end(),ccomp);
        cout<<maxprofit(arr,arr.size())<<endl;
    }
	return 0;
}
