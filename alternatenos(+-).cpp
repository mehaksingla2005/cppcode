vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> pos;
    vector<int> neg;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        if(a[i]<0){
            neg.push_back(a[i]);
        }
    }
    for(int i=0;i<n;i++){
        a[2*i]=pos[i];
        a[2*i+1]=neg[i];
    }
    return a;
}
