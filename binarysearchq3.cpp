#include<iostream>
using namespace std;
int peakelement(int arr[],int n){
    int start=0;
    int end=n-1;
    
     int mid;
     mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            end=mid;
        }
        mid=start+(end-start)/2;
    }return arr[mid];

}
int main(){
    int even[7]={1,2,3,4,3,2,1};
    cout<<"peakelement is"<<peakelement(even,7);
    return 0;
}