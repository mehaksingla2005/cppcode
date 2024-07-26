class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int>mpp;
      for(auto st:s){
        mpp[st]++;
      }  
      for(auto st:t){
        mpp[st]--;
      }
      for(auto mp:mpp){
        if(mp.second!=0)return false;
      }
      return true;
    }
};
