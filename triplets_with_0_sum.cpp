/*You are required to complete the function below*/
#include<algorithm>
bool findTriplets(int arr[], int n)
{ 
    int i,j;
    sort(arr,arr+n);
    for(i=0;i<n;i++){
        if(arr[i]>=0){
            break;
        }
    }
    int marker = i,neg = i-1,pos = i+1;
    
    for(j=i;j<n;j++){
        neg = j-1; pos = j+1;
        while(pos < n && neg >= 0){
            if(arr[j]+arr[pos]+arr[neg] == 0)
            return 1;
            if(arr[j]+arr[pos]+arr[neg] > 0)
            neg--;
            if(arr[j]+arr[pos]+arr[neg] < 0)
            pos++;
        }
    }
    for(j=i;j>=0;j--){
        neg = j-1; pos = j+1;
        while(pos < n && neg >= 0){
            if(arr[j]+arr[pos]+arr[neg] == 0)
            return 1;
            if(arr[j]+arr[pos]+arr[neg] > 0)
            neg--;
            if(arr[j]+arr[pos]+arr[neg] < 0)
            pos++;
        }
    }
    return 0;
    
}
