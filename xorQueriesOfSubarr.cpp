class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> prefixxor(n+1,0);
        for(int i=0;i<n;i++){
            prefixxor[i+1]=prefixxor[i]^arr[i];
        }
        vector<int> ans;
        for(auto it:queries){
            int left=it[0];
            int right=it[1];
            ans.push_back(prefixxor[left]^prefixxor[right+1]);
        }
        return ans;
    }
};
