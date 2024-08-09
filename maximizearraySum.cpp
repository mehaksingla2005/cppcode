#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int Maximize(vector<int> &arr) {
        const int MOD = 1e9 + 7; // Defining modulo value
        sort(arr.begin(), arr.end()); // Sort the array
        long long sum = 0; // Use long long to prevent overflow
        
        // Calculate the maximum value of the sum
        for(int i = 0; i < arr.size(); i++) {
            sum = (sum + (long long)arr[i] * i) % MOD;
        }
        return sum;
    }
};

// Driver Code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
