class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        
        vector<int> righta(n,0);
        int cntb=0;
        int cnta=0;
       
        for(int i=n-1;i>=0;i--){
             righta[i]=cnta;
            if(s[i]=='a')cnta++;
            
        }
        int deletions=INT_MAX;
        for(int i=0;i<n;i++){
            deletions=min(deletions,cntb+righta[i]);
            if(s[i]=='b')cntb++;
        }
        return deletions;
    }ā
};
