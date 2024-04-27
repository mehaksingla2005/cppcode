vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int n=a.size();
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]||a[j]==a[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(a[i]);
        }

    }
    sort(ans.begin(),ans.end());
    return ans;
}
