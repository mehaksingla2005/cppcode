

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n==1)return 0;
        int minHeight=arr[0];
        int maxHeight=arr[n-1];
        int ans=maxHeight-minHeight;
        for(int i=1;i<n;i++){
            minHeight=min(arr[0]+k,arr[i]-k);
            if(minHeight<0)continue;
            maxHeight=max(arr[i-1]+k,arr[n-1]-k);
            ans=min(ans,maxHeight-minHeight);
        }
        return ans;
    }
};

