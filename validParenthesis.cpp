class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> match={
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty() || st.top()!=match[s[i]]){
                    return false;
                }st.pop();
            }
        }return st.empty();

    }
};
