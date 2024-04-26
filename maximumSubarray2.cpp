long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long sum=0;
    long long maxi=LONG_MIN;
    int start;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
       
    }
     if(maxi<0){
            return 0;
        }
        else{
            return maxi;
        }
}
