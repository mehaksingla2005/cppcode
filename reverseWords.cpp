s

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        stringstream s(str);
        stack<string> st;
        string word;
        while(getline(s,word,'.')){
            st.push(word);
        }
        string result;
        while(!st.empty()){
            result+=st.top();
           st.pop();
           if(!st.empty()){
               result+='.';
           }
        }
        return result;
    }
};

\
