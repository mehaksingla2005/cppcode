// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int pivot(int *arr,int n){
    int s=0;
    int e=n-1;
    
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else e=mid;
 
    } return s;//return e
}
int binarySearch(int *arr,int s,int e,int key){
    while(s<=e){
        int mid=s+(e-s)/2;
    if(arr[mid]>key){
        e=mid-1;
    }else if(arr[mid]<key){
        s=mid+1;
    }else if(arr[mid]==key){
        return mid;
    }
    }return -1;
    
}
int search(int *arr,int n,int key){
    int p=pivot(arr,n);
    int s=0;
    if(arr[p]<=key && arr[n-1]>=key){
       return binarySearch(arr,p,n-1,key);
    }
    else{
        return binarySearch(arr,s,p-1,key);
    }
}

int main() {
    int arr[5]={7,9,1,2,3};
    cout<<"pivot element is at index: "<<pivot(arr,5)<<endl;
    int key=2;
  cout<<"the key is found at index: "<<search(arr,5,key);

    return 0;
}
