class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        if(s.find(t)!=string::npos){
            return 0;
        }
        while(i<t.size()&&!s.empty()){
            
            if(s.find(t[i])!=string::npos){
                int m=s.find(t[i]);
                
                s=s.substr(m+1);
                i++;
            }else{
                return t.size()-i;
            }
        }
        return t.size()-i;
    }
};
