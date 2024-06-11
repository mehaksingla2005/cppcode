class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int max=*max_element(arr1.begin(),arr1.end());
        vector<int> arr(max+1,0);
        for(int i=0;i<arr1.size();i++){
            arr[arr1[i]]++;
        }
        int index=0;
        for(auto it:arr2){
            while(arr[it]>0){
                arr1[index++]=it;
                arr[it]--;
            }
        }
        for(int i=0;i<=max;i++){
            while(arr[i]>0){
                arr1[index++]=i;
                arr[i]--;
            }
        }
        return arr1;
    }
};
