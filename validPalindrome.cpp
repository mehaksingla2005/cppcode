class Solution {
private:
    bool isPalindromicrecursive(string s,int left,int right){
        if(left>=right)return true;
        if(!isalnum(s[left]))return isPalindromicrecursive(s,left+1,right);
        if(!isalnum(s[right]))return isPalindromicrecursive(s,left,right-1);
        if(tolower(s[left])!=tolower(s[right]))return false;
        return isPalindromicrecursive(s,left+1,right-1);
    }
public:
    bool isPalindrome(string s) {
        return isPalindromicrecursive(s,0,s.size()-1);
    }
};
