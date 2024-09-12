class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt=0;
        unordered_set<char> st;
        for(auto it:allowed){
            st.insert(it);
        }
        for(auto word:words){
            for(int i=0;i<word.size();i++){
                if(st.find(word[i])==st.end()){
                    break;
                }
                if(i==word.size()-1)cnt++;
            }
            

        }
        return cnt;
    }
};
