class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int len=0;
        int sum=0;
       unordered_map<int,int> mpp;
       mpp[0]=0;
       for(int i=0;i<n;i++){
           sum+=A[i];
           if(sum==0){
               len=i+1;
           }
          else{
               if(mpp.find(sum)!=mpp.end()){
               int x=i-mpp[sum];
               len=max(len,x);
              
           }
          else{
               mpp[sum]=i;
          }
       }
          }
       return len;
    }
};
