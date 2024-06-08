class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
      for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            int m=-(nums[i]+nums[j]);
            
                   if(find(nums.begin()+j+1,nums.end(),m)!=nums.end()){
                     vector<int> a={nums[i],nums[j],m};
                  sort(a.begin(),a.end());
                    st.insert(a);
                   }
             
        }
      } 
      vector<vector<int>> arr(st.begin(), st.end());
        return arr;
    }
};
