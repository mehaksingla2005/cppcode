
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        int len1=s.length();
        int len2=p.length();
        
        if(len1<len2)return "-1";
        vector<int> hashS(256,0);
        vector<int> hashP(256,0);
        
        for(int i=0;i<len2;i++){
            hashS[p[i]]++;
        }
        int start=0;
        int start_idx=-1;
        int minLength=INT_MAX;
        int count=0;
        
         for(int j=0;j<len1;j++){
            hashP[s[j]]++;
            if(hashS[s[j]]!=0 && hashP[s[j]]<=hashS[s[j]]){
                count++;
            }
            if(count==len2){
                while(hashP[s[start]]>hashS[s[start]] || hashS[s[start]]==0){
                    if(hashP[s[start]]>hashS[s[start]]){
                        hashP[s[start]]--;
                    }
                    start++;
                }
                int len=j-start+1;
                while(minLength>len){
                    minLength=len;
                    start_idx=start;
                }
            }
        }
        if(start_idx==-1)return "-1";
        
        return s.substr(start_idx,minLength);
        
        
    }
};

