#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            cnt0 ++;
        }
       else if(arr[i]==1){
            cnt1 ++;
        }
       else{
            cnt2 ++;
        }
    }
    for(int i=0;i<cnt0;i++){
        arr[i]=0;
    }
    for(int i=cnt0;i<cnt1+cnt0;i++){
        arr[i]=1;
    }
    for(int i=cnt1+cnt0;i<cnt0+cnt1+cnt2;i++){
        arr[i]=2;
    }
}
