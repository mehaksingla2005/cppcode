class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
      for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> a={nums[i],nums[j],nums[k]};
                  sort(a.begin(),a.end());
                    st.insert(a);
                }
            }
        }
      } 
      vector<vector<int>> arr(st.begin(), st.end());
        return arr;
    }
};
