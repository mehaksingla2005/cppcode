class Solution {
public:
    int countPairs(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();

        auto isAlmostEqual=[&](int x,int y)->bool{
            if(x==y)return true;
            string a=to_string(x);
            string b=to_string(y);

            for(int i=0;i<a.size();i++){
                for(int j=i+1;j<a.size();j++){
                    swap(a[i],a[j]);
                    if(stoi(a)==y)return true;
                    swap(a[i],a[j]);
                }
            }
            for(int i=0;i<b.size();i++){
                for(int j=i+1;j<b.size();j++){
                    swap(b[i],b[j]);
                    if(stoi(b)==x)return true;
                    swap(b[i],b[j]);
                }
            }
            return false;
        };

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                cnt+=isAlmostEqual(nums[i],nums[j]);
            }
        }
        return cnt;
    }
};
