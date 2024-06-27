#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
            }
            else if(key>=arr[mid]){
                start=mid+1;
            }
            else if(key<=arr[mid]){
                end=mid-1;
            }
return ans;

        }
    }
int lastoccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
            }
            else if(key>=arr[mid]){
                start=mid+1;
            }
            else if(key<=arr[mid]){
                end=mid-1;
            }
return ans;

        }
    }

int main(){
    int even[5]={1,2,3,3,5};
    cout<<"first occurence of 3 is at index"<< firstoccurence(even,5,3)<<endl;
    cout<<"last occurence of 3 is at index"<<lastoccurence(even,5,3);
}