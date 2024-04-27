int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n=a.size();
    int len=0;
    for(int i=0;i<n;i++){
       long long sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==k){
                if(len<(j-i+1)){
                    len=(j-i+1);
                }
            }
        }
    }return len;
}
