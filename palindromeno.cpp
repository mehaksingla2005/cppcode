class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        vector<int>arr;
        while(x>0){
            int n=x%10;
            x=x/10;
            arr.push_back(n);
        }
       

        for(int i=0;i<=arr.size()/2;i++){
            if(arr[i]!=arr[arr.size()-1-i]){
                return false;
            }
        }return true;
    }
};
