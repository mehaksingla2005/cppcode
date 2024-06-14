class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int moves=0;
        for(auto it=mpp.begin();it!=mpp.end();it++){
           while(it->second>1){
                int nextval=it->first+1;
                it->second--;
                moves++;
                mpp[nextval]++;
            }
        }
        return moves;

    }
};
