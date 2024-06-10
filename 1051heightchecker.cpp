class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected=heights;
        sort(expected.begin(),expected.end());
        int j=0;
        for(int i=0;i<(heights.size());i++){
            if(expected[i]!=heights[i]) j++;
        }
        return j;
    }
};
