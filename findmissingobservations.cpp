class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=(n+rolls.size())*mean;
        for(int i=0;i<rolls.size();i++){
            sum-=rolls[i];
        }
        if(sum>6*n || sum<n){
            return {};
        }
        int distributedMean=sum/n;
        int mod=sum%n;
        vector<int> ans(n,distributedMean);
        for(int i=0;i<mod;i++){
            ans[i]++;
        }
        return ans;


    }
};
