

void merge(int arr[],int l,int mid,int r){
   int temp[r-l+1]={0};

    int left=l;
    int right=mid+1;
    int i=0;
    while(left<=mid&&right<=r){
        if(arr[left]<=arr[right]){
            temp[i]=arr[left];
            i++;
            left++;
        }else{
            temp[i]=arr[right];
            i++;
            right++;
        }
    }
    while(left<=mid){
         temp[i]=arr[left];
            left++;
            i++;
    }
    while(right<=r){
         temp[i]=arr[right];
            right++;
            i++;
    }
    for(int j=0;j<i;j++){
        arr[j+l]=temp[j];
    }
}


void mergeSort(int arr[], int l, int r) {
    // Write Your Code Here
    if(l>=r){
        return;
    }
    int mid=l+(r-l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
