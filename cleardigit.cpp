class Solution {
public:
    string clearDigits(string s) {
        int i=0;
        while(i<s.size()){
           if(isdigit(s[i])){
                if(i>0){
                s.erase(i-1,2);
                i--;
            }else{
                s.erase(i);
            }
           }
            else{
                i++;
            }
        }return s;
        
    }
};
