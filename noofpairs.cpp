//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        // Your Code goes here.
        long long cnt=0;
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        vector<int> y(5,0);
        for(int i=0;i<brr.size();i++){
            if(brr[i]<5)y[brr[i]]++;
            else break;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)continue;
            if(arr[i]==1){
                cnt+=y[0];
                continue;
            }
            auto idx=upper_bound(brr.begin(),brr.end(),arr[i])-brr.begin();
            cnt+=brr.size()-idx;
            cnt+=y[0]+y[1];
            if(arr[i]==2) cnt-=y[3]+y[4];
            if(arr[i]==3) cnt+=y[2];
            
        }
        return cnt;
        
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> ex;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            ex.push_back(num);
        a = ex;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        int num2;
        while (ss >> num2)
            b.push_back(num2);

        Solution ob;
        cout << ob.countPairs(a, b) << endl;
    }
}
// } Driver Code Ends
