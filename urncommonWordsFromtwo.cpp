class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mpp;
        stringstream ss(s1);
        stringstream ss2(s2);
        string word;
        while(ss >> word){
            mpp[word]++;
        }
        while(ss2 >> word){
            mpp[word]++;
        }
        vector<string> result;
        for(auto it:mpp){
            if(it.second==1)result.push_back(it.first);
        }
        return result;


    }
};
