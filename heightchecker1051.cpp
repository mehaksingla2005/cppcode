class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int maxHeight=*max_element(heights.begin(),heights.end());
        vector<int> count(maxHeight+1,0);
        for(auto height:heights){
            count[height]++;
        }
        int index=0;
        vector<int>expected(heights.size());
        for(int height=0;height<=maxHeight;height++){
            while(count[height]>0){
                expected[index++]=height;
                count[height]--;
                            }
        }
     int j=0;
       
        for(int i=0;i<(heights.size());i++){
            if(expected[i]!=heights[i]) j++;
        }
        return j;
    }
};
