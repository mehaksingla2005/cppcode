void insertionSort(int arr[], int n)
{int key,j;
    //write your code here
    for(int i=1;i<n;i++){
        key =arr[i];
        j=i;
        while(j>0&& arr[j-1]>arr[j]){
           int temp=arr[j-1];
           arr[j-1]=arr[j];
           arr[j]=temp;
            j--;
        }
    }
}
