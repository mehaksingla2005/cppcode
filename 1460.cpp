class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i=0;i<target.size();i++){
            mpp[target[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]--;
        }
        for(auto it:mpp){
            if(it.second!=0)return false;
        }return true;
    }
};
