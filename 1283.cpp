class Solution {
private:
    int sumOfDivision(vector<int>& nums, int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum += ceil((double)nums[i]/(double)mid);
        }return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans=1;
        int left=1;
        int right=*max_element(nums.begin(),nums.end());
        while(left<=right){
            int mid=left+(right-left)/2;
            if(sumOfDivision(nums,mid)<=threshold){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }return ans;
    }
};
