
class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0;
        int j=0;
        int n=arr.size();
        int cnt=0;
        int maxcnt=0;
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                i++;
                cnt++;
            }else{
                j++;
                cnt--;
            }
            maxcnt=max(cnt,maxcnt);
        }
        return maxcnt;
    }
};
