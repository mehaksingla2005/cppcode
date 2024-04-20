#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    map<int,int> preSumMap;
    int sum=0;
    int maxLen=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==k){
            if((i+1)>maxLen){
                maxLen=i+1;
            }
        }
        int rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            if(len>maxLen){
                maxLen=len;
            }
          
        }  preSumMap[sum]=i;
    }return maxLen;
}
