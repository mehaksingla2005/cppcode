class Solution {
public:
    int scoreOfString(string s) {
        int i=1;
        
        int sum=0;
        while(i<s.size()){
            sum+=abs(s[i]-s[i-1]);
            i++;
           
                    }
                    return sum;
    }
};
