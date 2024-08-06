class Solution {
public:
    int minimumPushes(string word) {
        vector<int>mpp(26,0);
        for(int i=0;i<word.length();i++){
            mpp[word[i]-'a']++;
        }
        sort(mpp.begin(),mpp.end(),greater<int>());

        int ans=0;
        for(int i=0;i<26;i++){
            int press=(i/8)+1;
            int freq=mpp[i];
            ans+=(press*freq);
          
        }
        return ans;
    }
};
