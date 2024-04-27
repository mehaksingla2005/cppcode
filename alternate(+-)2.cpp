vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int n=a.size();
    vector<int> ans(n,0);
    int pos=0;
    int neg=1;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            ans[pos]=a[i];
            pos+=2;
        }
        else if(a[i]<0){
            ans[neg]=a[i];
            neg+=2;
        }
    }return ans;
}
