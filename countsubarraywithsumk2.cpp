int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    unordered_map<int,int> mpp;
    int n=arr.size();
    int preSum=0;
    int cnt=0;
    mpp[0]=1;

    for(int i=0;i<n;i++){
        preSum+=arr[i];
        int remove=preSum-k;
        cnt+=mpp[remove];
        mpp[preSum]+=1;
    }
    return cnt;
}
