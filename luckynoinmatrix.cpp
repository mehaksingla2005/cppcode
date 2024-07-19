class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            int mini=INT_MAX;
            int min_index=0;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]<mini){
                    mini=matrix[i][j];
                    min_index=j;
                }
            }
            bool istrue=true;
            for(int j=0;j<matrix.size();j++){
                if(mini<matrix[j][min_index]) {
                    istrue=false;
                    break;
                }
            }
            if(istrue) ans.push_back(mini);
        }
        return ans;
    }
};
