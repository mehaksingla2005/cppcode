#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int arr[],int start,int end,int key){
 print(arr,start,end);
    if(start>end){
        return false;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]<key){
       return  binarySearch(arr,mid+1,end,key);
    }
    else if(arr[mid]>key){
        return binarySearch(arr,start,mid-1,key);
    }else{
        return true;
    }
}
int main(){
    int arr[6]={2,4,6,10,14,18};
    int size=6;
    int s=0;
    int e=size-1;
    int key =18;
    int ans=binarySearch(arr,s,e,key);
    if(ans){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    return 0;
}
