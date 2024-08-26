class Solution {
private:
    void subsequences(int ind,vector<int>& nums,vector<vector<int>> &ans,vector<int> &ds){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        subsequences(ind+1,nums,ans,ds);
        ds.pop_back();
        subsequences(ind+1,nums,ans,ds);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>> ans;
        subsequences(0,nums,ans,ds);
        return ans;
    }
};
