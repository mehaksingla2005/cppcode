vector<int> row(int N){
    vector<int> arr;
    int ans=1;
   arr.push_back(ans);
    for(int i=1;i<N;i++){
        ans=ans*(N-i);
        ans=ans/i;
        arr.push_back(ans);
    }
    return arr;
}


vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> ans;
  for(int i=1;i<=N;i++){
      ans.push_back(row(N));
  }
  return ans;
}
