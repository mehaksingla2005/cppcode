class Solution {
public:
    string getEncryptedString(string s, int k) {
        string str(s.size(),' ');
        for(int i=0;i<s.size();i++){
           
                str[i]=s[(i+k)%s.size()];
           
        }return str;
    }
};
