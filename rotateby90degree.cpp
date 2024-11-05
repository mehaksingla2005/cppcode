

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    //step-1 Transpose
    int n=mat.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    //step-2 Reverse
    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
}


