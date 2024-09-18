
//O(N) &O(N)
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(int i=0;i<x.length();i++){
            if(st.empty())st.push(x[i]);
            else if((st.top()=='{'&&x[i]=='}')||(st.top()=='['&&x[i]==']')||(st.top()=='('&&x[i]==')'))st.pop();
            else st.push(x[i]);
            
        }
        if(st.empty())return true;
        return false;
    }

};


//O(N) && O(1)

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool checkMatch(char c1,char c2){
        if(c1=='{'&&c2=='}')return true;
        if(c1=='['&&c2==']')return true;
        if(c1=='('&&c2==')')return true;
        return false;
    }
    bool ispar(string x)
    {
        // Your code here
       int top=-1;
       for(int i=0;i<x.length();i++){
           if(top<0 || !checkMatch(x[top],x[i])){
               top++;
               x[top]=x[i];
           }
           else{
               top--;
           }
       }
       return top==-1;
    }

};

