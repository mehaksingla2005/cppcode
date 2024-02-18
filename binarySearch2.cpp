//total no of occurences of a no in a sorted array

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
    int ans1=firstOcc(even,5,3);
    int ans2=lastOcc(even,5,3);
    cout<<"first occurence of 3 is at index "<<ans1<<endl;
    cout<<"last occurence of 3 is at index "<<ans2<<endl;
    int total_occurence=ans2-ans1+1;
    cout <<"total no of occurence is "<<total_occurence<<endl;
    return 0;
}
