//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        unordered_map<int,int> mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        vector<pair<int,int>> arr1;
        for(auto it:mpp){
            arr1.push_back({it.second,it.first});
        }
        
        sort(arr1.begin(),arr1.end(),[&](pair<int,int> &a,pair<int,int> &b){
            if(a.first==b.first)return a.second<b.second;
            return a.first>b.first;
        });
        int i=0;
        for(auto it:arr1){
            while(it.first){
                arr[i++]=it.second;
                it.first--;
            }
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends
