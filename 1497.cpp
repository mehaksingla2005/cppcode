class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> mp(k,0);
        for(int &num:arr){
            int rem=(num%k + k)%k;
            mp[rem]++;
        }
        if(mp[0]%2!=0)return false;
        for(int i=1;i<=k/2;i++){
            int counterhalf=k-i;
            if(mp[counterhalf]!=mp[i])return false;
        }
        return true;
    }
};
