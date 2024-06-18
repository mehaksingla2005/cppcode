int findKRotation(int arr[], int n) {
	    // code here
	    
	    int ans=INT_MAX;
	    int l=0;
	    int r=n-1;
	    int index=0;
	    while(l<=r){
	        int mid=l+(r-l)/2;
	        if(arr[l]<=arr[mid]){
	            if(ans>arr[l]){
	                ans=arr[l];
	                index=l;
	            }
	            
	            l=mid+1;
	        }	    
	        else{
	            if(ans>arr[mid]){
	                ans=arr[mid];
	                index=mid;
	            }
	            r=mid-1;
	        }
	    }return index;
	}
