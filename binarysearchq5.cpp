/*search in a sorted rotated arrray111111*/
#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;

        }else{
            e=mid;
        }mid=s+(e-s)/2;
    }return s;
}
int binarysearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){

    
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
    }    
}
int findposition(int arr[],int n,int key){
    int pivot=getpivot(arr,n);
    if(key>=arr[pivot]&&key<=arr[n-1]){
        return binarysearch(arr,pivot,n-1,key);
    }
    else{
        return binarysearch(arr,0,pivot-1,key);
    }
}
int main(){
    int even[5]={7,9,1,2,3};
    cout<<"the element is present at index "<<findposition(even,5,2);
    return 0;
}