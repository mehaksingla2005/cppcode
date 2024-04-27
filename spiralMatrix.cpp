vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    vector<int> result;
    if(MATRIX.empty()){
        return result;
    }
    int top=0;
    int left=0;
    int bottom=MATRIX.size()-1;
    int right=MATRIX[0].size()-1;
    while(left<=right&&top<=bottom){
        for(int i=left;i<=right;i++){
        result.push_back(MATRIX[top][i]);
   }top++;
    for(int i=top;i<=bottom;i++){
        result.push_back(MATRIX[i][right]);
    }right--;
    if(top<=bottom){
          for(int i=right;i>=left;i--){
       result.push_back(MATRIX[bottom][i]);
    }bottom--;
    }
    if(left<=right){
        for(int i=bottom;i>=top;i--){
       result.push_back(MATRIX[i][left]);
    }left++;
    }
    
    }
    return result;
    
}
