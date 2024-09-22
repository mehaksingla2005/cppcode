class Solution {
public:
    void solve(int currNum,int n,vector<int>& result){
        if(currNum>n)return;
        result.push_back(currNum);
        for(int append=0;append<=9;append++){
            int newNum=(currNum*10)+append;
            if(newNum>n)return;
            solve(newNum,n,result);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>result;
        for(int currNum=1;currNum<=9;currNum++){
            solve(currNum,n,result);
        }
        return result;
    }
};
