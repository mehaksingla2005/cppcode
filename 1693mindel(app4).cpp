class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        
        
        int cntb=0;
        int cnta=0;
        for(int i=0;i<n;i++){
             if(s[i]=='a')cnta++;
        }
       
       
        int deletions=INT_MAX;
        for(int i=0;i<n;i++){
            if(s[i]=='a')cnta--;
            deletions=min(deletions,cntb+cnta);
            if(s[i]=='b')cntb++;
        }
        return deletions;
    }
};
