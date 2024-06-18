class Solution {
public:
    int firstocc(vector<int>& nums, int target){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                r=mid-1;
        }else if(nums[mid]<target)l=mid+1;
        else r=mid-1;
    }return ans;}
    int lastocc(vector<int>& nums, int target){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
        }else if(nums[mid]<target)l=mid+1;
        else r=mid-1;
    }return ans;}

    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size()==0)return {-1,-1};
        return {firstocc(nums,target),lastocc(nums,target)};
        
    }
};
