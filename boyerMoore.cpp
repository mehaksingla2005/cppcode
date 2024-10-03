
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        int n=nums.size();
        int a=-1;
        int b=-1;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==a)cnt1++;
            else if(nums[i]==b)cnt2++;
            else if(cnt1==0){
                a=nums[i];
                cnt1=1;
            }
            else if(cnt2==0){
                b=nums[i];
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==a)cnt1++;
            else if(nums[i]==b)cnt2++;
        }
        vector<int> result;
        if(cnt1>n/3)result.push_back(a);
        if(cnt2>n/3)result.push_back(b);
        if(result.empty())return {-1};
        return result;
        
    }
};

