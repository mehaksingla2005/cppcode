

class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        // Your code goes here.
        long long ans=1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]>ans)return ans;
            ans+=arr[i];
        }
        return ans;
    }
};

