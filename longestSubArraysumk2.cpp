#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    map<long long,int>preSumMap;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        preSumMap[sum]=i;
    }
    return maxLen;
}
