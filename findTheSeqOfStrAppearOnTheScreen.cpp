class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>ans;
        string str;
        str.push_back('a');
        int i=0;
        while(i<target.length()){
            if(target[i]==str[i]){
                ans.push_back(str);
                if(i<target.length()-1){
                    str.push_back('a');
                    i++;
                }
                else{
                    break;
                }
            }
            while(target[i]!=str[i]){
                ans.push_back(str);
                    if (str[i] == 'z') {
                    str[i] = 'a';  
                } else {
                    str[i] = str[i] + 1;  
                }
                
            }
        }
        return ans;
    }
};
