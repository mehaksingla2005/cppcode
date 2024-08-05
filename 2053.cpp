class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        int i=0;
        for(auto it:arr){
            if(mpp[it]==1){
                i++;
            }
            if(i==k){
                return it;
            }
        }
        return "";
    }
};
