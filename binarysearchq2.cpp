/*totalnoofoccurences*/
#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        end=mid-1;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }else{
        start=mid+1;
    }
        mid=start+(end-start)/2;
}
return ans;
}
int lastoccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
    if(arr[ mid]==key){
        ans= mid;
        start= mid+1;
    }
    else if(arr[ mid]>key){
        end= mid-1;
    }else{
        start= mid+1;
    }
    mid=start+(end-start)/2;
}
return ans;
}
int main(){
      int even[5]={1,2,3,3,5};
      int totaloccurences=(lastoccurence(even,5,3)-firstoccurence(even,5,3))+1;
      cout<<"the total no of occurences is"<<totaloccurences;
}