#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int low=0;
    int mid=0;
    int high=n-1;
 
    while(mid<=high){
      if (arr[mid] == 0) {
        swap(arr[mid], arr[low]);
        low++;
        mid++;
      } else if (arr[mid] == 2) {
        swap(arr[mid], arr[high]);
        high--;
       
      }
      else{
          mid++;
      }
        }
    }

