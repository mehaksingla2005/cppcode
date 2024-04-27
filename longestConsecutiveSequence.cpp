int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
   sort(a.begin(),a.end());
   int n=a.size();
   int longest=1;
   int cnt=0;
   int lastsmaller=INT_MIN;
   for(int i=0;i<n;i++){
       if(a[i]-1==lastsmaller){
           cnt=cnt+1;
           lastsmaller=a[i];
       }else if(a[i]!=lastsmaller){
           cnt=1;
           lastsmaller=a[i];
       } longest=max(longest,cnt);
   } return longest;
    }

