class Solution {
public:
    bool isValid(unordered_map<char,int> word2freq,unordered_map<char,int> windowFreq){
        for(auto it:word2freq){
            if(windowFreq[it.first]<it.second)return false;
        }
        return true;
    }
    long long validSubstringCount(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        if(m>n)return 0;
        unordered_map<char,int> word2freq;
        for(auto it:word2){
            word2freq[it]++;
        }
        
        unordered_map<char,int> windowFreq;
        int cnt=0;
        int left=0;
        for(int i=0;i<n;i++){
            windowFreq[word1[i]]++;
            while(isValid(word2freq,windowFreq)){
                cnt+=n-i;
                windowFreq[word1[left]]--;
                left++;
            }
        }
      
        
        return cnt;
        
        
    }
};
