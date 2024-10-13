
class Solution {
  public:
    vector<int> rearrange(vector<int>& arr) {
        // Code here
      //Time Complexity=O(n^2) and O(1)
    //     int n=arr.size();
    //   for(int i=0;i<n;i++){
    //       for(int j=0;j<n;j++){
    //           if(arr[j]==i){
    //               swap(arr[j],arr[i]);
    //               break;
    //           }
    //       }
    //   }
    //   for(int i=0;i<n;i++){
    //       if(arr[i]!=i){
    //           arr[i]=-1;
    //       }
    //   }
    //   return arr;
    
    
    //Time Complexity:-O(n) and O(n)
    // int n=arr.size();
    // vector<int> temp(n,-1);
    
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=-1){
    //         temp[arr[i]]=arr[i];
    //     }
    // }
    // arr=temp;
    // return temp;


      //Time Complexity=O(N) and O(1)
    
    int n=arr.size();
    int i=0;
    while(i<n){
        if(arr[i]!=-1 &&arr[i]!=arr[arr[i]]){
            swap(arr[i],arr[arr[i]]);
        }else{
            i++;
        }
    }
    return arr;
    }
};

