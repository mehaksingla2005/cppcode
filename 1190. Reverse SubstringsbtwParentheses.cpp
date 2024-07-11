class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        vector<int> pair(n);
        stack<int>openParenthesis;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                openParenthesis.push(i);
                            }
                            if(s[i]==')'){
                                int j=openParenthesis.top();
                                openParenthesis.pop();
                                pair[j]=i;
                                pair[i]=j;
                            }
        }
        string str;
        for(int curr=0,direction=1;curr<n;curr+=direction){
            if(s[curr]=='(' || s[curr]==')'){
                curr=pair[curr];
                direction=-direction;
            }else{
                str+=s[curr];
            }
        }return str;
    }
};
