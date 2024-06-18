   long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        long long int low=1;
        long long int high=x;
        long long int ans=1;
        while(low<=high){
            long long int mid=low+(high-low)/2;
            if(mid*mid==x)return mid;
            else if(mid*mid>x)high=mid-1;
            else {
                ans=mid;
                low=mid+1;
            }
        }return ans;
    }
