class Solution {
  private:
  int student(int n, int arr[], int m){
       int std = 1;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (sum + arr[i] <= m) {
                sum += arr[i];
            } else {
                std++;
                sum = arr[i];
            }
        }
        return std;
  }
  public:
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code 
        if(m>n)return -1;
        long long low = *std::max_element(arr, arr + n);
        long long high = 0;
        for (int i = 0; i < n; i++) {
            high += arr[i];
        }
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            int std = student(n, arr, mid);
            if (std > m) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};
