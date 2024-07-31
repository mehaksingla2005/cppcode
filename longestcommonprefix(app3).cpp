//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  private:
   string commonPrefixUtil(string str1,string str2){
       string common;
       int n1=str1.length();
       int n2=str2.length();
       int minlength=min(n1,n2);
       for(int i=0;i<minlength;i++){
           if(str1[i]!=str2[i]){
              break;
           }
           common.push_back(str1[i]);
       }return common;
       
   }
   string commonprefix(vector<string> arr,int low,int high){
       if(low==high)return arr[low];
       
       if(high>low){
           int mid=low+(high-low)/2;
           string str1=commonprefix(arr,low,mid);
           string str2=commonprefix(arr,mid+1,high);
           if(str1.empty() || str2.empty())return "";
           return commonPrefixUtil(str1,str2);
       }
       return "";
   }
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if(arr.empty())return "-1";
       string str= commonprefix(arr,0,arr.size()-1);
       return str.empty()?"-1":str;
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
