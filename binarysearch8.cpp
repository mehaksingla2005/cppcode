//You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
//Now, your task is to find the first and last occurrence of ‘k’ in 'arr'
int firstocc(vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }return ans;
}
int lastocc(vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> ans;
    ans.first=firstocc(arr,n,k);
    ans.second=lastocc(arr,n,k);
    return ans;
}
