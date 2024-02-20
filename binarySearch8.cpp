//find total no of occurences of an element in an array
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





int count(vector<int>& arr, int n, int x) {
    int first=firstocc(arr,n,x);
    int second=lastocc(arr,n,x);
	if(first==-1){
		return 0;
	}
	int total =second-first+1;
	return total;
}
