// first and last occurence of an element in an sorted array
#include <iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }else{
            ans=mid;
            e=mid-1;
        }
    }
    return ans;
}
int lastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}

int main() {
    int even[5]={1,2,3,3,5};
    int ans=firstOcc(even,5,3);
    cout<<"first occurence of 3 is at index "<<ans<<endl;
    cout<<"last occurence of 3 is at index "<<lastOcc(even,5,3)<<endl;
    return 0;
}
