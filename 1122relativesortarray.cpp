class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mpp;
        for(int i=0;i<arr1.size();i++){
            mpp[arr1[i]]++;
        }
        int index=0;
        for(int i=0;i<arr2.size();i++){
            if(mpp.find(arr2[i])!=mpp.end()){
                while(mpp[arr2[i]]>0){
                    arr1[index++]=arr2[i];
                    mpp[arr2[i]]--;
                }
            }
        }
        for(auto it:mpp){
            while(it.second!=0){
                arr1[index++]=it.first;
    it.second--;
            }
        

        }return arr1;

    }
};
