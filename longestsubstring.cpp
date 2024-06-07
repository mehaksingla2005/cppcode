class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int n=s.size();
        map<int,int> mpp;
        int left=0;
        int right=0;
        while(left<=right&&right<n){
           
            if(mpp.find(s[right])==mpp.end()){
                 int len=right-left+1;
             maxlen=max(len,maxlen);
                 mpp.insert({s[right],right});
                 right++;
                
            }else{
                left=mpp[s[right]]+1;
                mpp[s[right]]=right;
                  int len=right-left+1;
             maxlen=max(len,maxlen);
             right++;   
            }
           

        }
        return maxlen;
        
    }
};
