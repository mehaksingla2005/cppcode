void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n=arr.size();
    int min,k;
    for(int i=0;i<n;i++){
        min=arr[i];
        k=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }
}
