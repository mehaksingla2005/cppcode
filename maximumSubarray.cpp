long long maxSubarraySum(vector<int> arr, int n)
{long long max=0;
    // Write your code here.
    for(int i=0;i<n;i++){
       long long sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
         
          if(sum>max){
              max=sum;
          }
        }
    }return max;
}
