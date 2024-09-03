class Solution{
	private:
	int lcs(string s1,string s2){
	    int m=s1.length();
	    int n=s2.length();
	    vector<vector<int>> t(m+1,vector<int>(n+1));
	    for(int row=0;row<m+1;row++)t[row][0]=0;
	    for(int col=0;col<n+1;col++)t[0][col]=0;
	    for(int i=1;i<m+1;i++){
	        for(int j=1;j<n+1;j++){
	            if(s1[i-1]==s2[j-1]){
	                t[i][j]=1+t[i-1][j-1];
	            }
	            else{
	                t[i][j]=max(t[i-1][j],t[i][j-1]);
	            }
	        }
	    }
	    return t[m][n];
	}

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int lcslength=lcs(str1,str2);
	    int insertions=str2.length()-lcslength;
	    int  deletions=str1.length()-lcslength;
	    return (insertions+deletions);
	    
	} 
};



