int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n=a.size();
    int maxLen=0;
    long long sum=a[0];
    int i=0;
    int j=0;
    while(j<n){
        while(i<=j&&sum>k){
            sum-=a[i];
           i++;
        }
        if(sum==k){
            maxLen=max(maxLen,j-i+1);
        }
        j++;
        if(j<n){
            sum+=a[j];
        }
    }return maxLen;
}
