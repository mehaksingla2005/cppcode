

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        int k=1;
        while(n>1){
            arr.insert(arr.begin(),arr.back());
            arr.pop_back();
            int id=n-k;
            if(id<0)id=0;
            arr.erase(arr.begin()+id);
            k++;
            n--;
        }
        return arr[0];
    }
};


