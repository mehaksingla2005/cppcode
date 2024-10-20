class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n=s.length();
        int cnt=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>freq;
            for(int j=i;j<n;j++){
                freq[s[j]]++;
                for(auto &pair:freq){
                    if(pair.second>=k){
                        cnt++;
                        break;
                    }
                }
            }
        }
        return cnt;

    }
};
