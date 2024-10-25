
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int> ans;
        int i=0;
        int j=n-1;
        while(i<=j){
           if(i!=j){
                ans.push_back(arr[j--]);
                ans.push_back(arr[i++]);
           }else{
               ans.push_back(arr[i++]);
           }
            
        }
        return ans;
    }
};

