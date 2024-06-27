#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int i=(start+end)/2;
    while(start<=end){
    if(arr[i]==key){
        return i;
    
    }else if(arr[i]>key){
        end=i-1;
        
    }else{
        start=i+1;
    }
    i=(start+end)/2;
    }
    return -1;
}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int evenindex=binarysearch(even,6,20);
    cout<<"index of 18 is"<< evenindex <<endl;
    int oddindex=binarysearch(odd,5,8);
    cout<<"index of 8 is"<<oddindex<<endl;
    return 0;
}