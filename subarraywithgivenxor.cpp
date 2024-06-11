int Solution::solve(vector<int> &A, int B) {
    int cnt=0;
    for(int i=0;i<A.size();i++){
        int xors=0;
        for(int j=i;j<A.size();j++){
            xors=xors^A[j];
            if(xors==B){
                cnt++;
            }
        }
    }
    return cnt;
}
