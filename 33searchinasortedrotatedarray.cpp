class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==target)return 0;
            else return -1;
        }
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target)return mid;
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target &&nums[mid]>=target)r=mid-1;
                else l=mid+1;
            }
            else{
                if(nums[r]>=target && nums[mid]<=target)l=mid+1;
                else r=mid-1;
            }
        }return -1;
        
    }
};
