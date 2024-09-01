class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        vector<vector<int>> ans(m, vector<int>(n));
        if(m*n !=original.size())return {};
        for(int j=0;j<original.size();j++){
            int row=j/n;
            int col=j%n;
            ans[row][col]=original[j];
            
        }
        return ans;
    }
};
