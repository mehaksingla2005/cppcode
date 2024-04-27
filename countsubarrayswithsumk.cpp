int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int cnt=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                cnt++;
            }
        }

    }
    return cnt;
}
