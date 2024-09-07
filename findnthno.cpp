

class Solution {
  public:
    bool containsnine(long long num){
        while(num>0){
            if(num%10==9)return true;
            num=num/10;
        }
        return false;
    }
    long long findNth(long long n) {
        // code here.
        long long count=0;
        long long current=1;
        while(true){
            if(!containsnine(current)){
                count++;
                if(count==n)return current;
            }
            current++;
        }
        
    }
};



//2nd approach
//O(logn)


class Solution {
  public:
    long long findNth(long long n) {
        // code here.
        long long result=0;
        long long place=1;
        while(n>0){
            result+=(n%9)*place;
            n/=9;
            place*=10;
        }
        return result;
    }
};



