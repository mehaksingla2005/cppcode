 vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int i=0;
        vector<vector<int>> ans(m, vector<int>(n));
        if(m*n !=original.size())return {};
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                ans[j][k]=original[i++];
            }
        }
        return ans;
    }
