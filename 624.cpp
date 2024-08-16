class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mini=arrays[0].front();
        int maxi=arrays[0].back();
        int result=0;
        for(int i=1;i<arrays.size();i++){
            vector<int> arr=arrays[i];
            int minn=*min_element(arr.begin(),arr.end());
            int maxx=*max_element(arr.begin(),arr.end());
            result=max(result,abs(mini-maxx));
            result=max(result,abs(maxi-minn));
            mini=min(minn,mini);
            maxi=max(maxi,maxx);
        }
        return result;
    }
};
