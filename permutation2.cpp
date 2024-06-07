
class Solution {
    private:
     void solve(vector<int>& nums,vector<vector<int>> &ans,set<vector<int>> &uniqueparams,int index){
        //base case
        if(index>=nums.size()){
            if(uniqueparams.find(nums)==uniqueparams.end()){
                ans.push_back(nums);
                uniqueparams.insert(nums);
            return;
            }
            
        }
        else{
            for(int j=index;j<nums.size();j++){
                swap(nums[index],nums[j]);
                solve(nums,ans,uniqueparams,index+1);
                swap(nums[index],nums[j]);
            }
        }
     }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> uniqueparams;
        int index=0;
        solve(nums,ans,uniqueparams,index);
        
        return ans;

    }
};
