#include<iostream>
using namespace std;
bool isSorted(int *arr,int size){
    //basecase
    if(size==0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}
int main(){
    int arr[5]={2,4,5,6,7};
    int size=5;
    bool ans=isSorted(arr,size);
    if(ans){
        cout<<"Array is Sorted"<<endl;
        
    }
    else{
        cout<<"Array is not sorted";
    }
}
