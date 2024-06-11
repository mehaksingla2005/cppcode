int Solution::solve(vector<int> &A, int B) {
    map<int,int> mpp;
    int xors=0;
    mpp[xors]++;
    int cnt=0;
    for(int i=0;i<A.size();i++){
        xors=xors^A[i];
        int x=xors^B;
        if(mpp.find(x)!=mpp.end()){
            cnt+=mpp[x];
        }mpp[xors]++;
    }return cnt;
}
