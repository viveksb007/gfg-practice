/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */

// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i,j,k;
    int n1 = m-l+1, n2 = r-m;
    int a1[n1],a2[n2];
    for(i=l;i<=m;i++) a1[i-l] = arr[i];
    for(i=m+1;i<=r;i++) a2[i-m-1] = arr[i];
    i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a1[i] <= a2[j]){
            arr[k] = a1[i];
            i++;
            k++;
        }else{
            arr[k] = a2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = a1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = a2[j];
        j++;
        k++;
    }
}
