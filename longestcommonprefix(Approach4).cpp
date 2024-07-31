//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  private:
   bool allhaveprefix(vector<string> arr,string str,int low,int high){
       for(int i=1;i<arr.size();i++){
           for(int j=low;j<=high;j++){
               if(arr[i][j]!=str[j])return false;
           }
       }return true;
   }
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int index=arr[0].size();
        for(int i=0;i<arr.size();i++){
            if(arr[i].size()<index)index=arr.size();
        }
        string ans;
        int low=0;
        int high=index;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(allhaveprefix(arr,arr[0],low,mid)){
                ans=ans+arr[0].substr(low,mid-low+1);
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans.empty()?"-1":ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends
