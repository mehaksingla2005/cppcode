class Solution {
public:
    int count(long curr,long next,int n){
        int countNum=0;
        while(curr<=n){
            countNum+=(next-curr);
            curr*=10;
            next*=10;
            next=min(next,(long)n+1);
        }
        return countNum;
    }
    int findKthNumber(int n, int k) {
        int curr=1;
        k--;
        
        while(k>0){
            int countNum=count(curr,curr+1,n);
            if(countNum<=k){
                curr++;
                k-=countNum;
            }
            else{
                curr*=10;
                k--;
            }
        }
        return curr;
    }
};
