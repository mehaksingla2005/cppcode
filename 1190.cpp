class Solution {

public:
    string reverseParentheses(string s) {
        stack<string> st;
        string current;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(current);
                current.clear();
            }else if(s[i]==')'){
                reverse(current.begin(),current.end());
                current=st.top()+current;
                st.pop();
            }else{
                current.push_back(s[i]);
            }
        }return current;

    }
};
