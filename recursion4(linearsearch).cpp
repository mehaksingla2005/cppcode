#include<iostream>
using namespace std;
bool checkFound(int arr[0],int key,int size){
    if(size==0){
        return false;
    }
        if(key==arr[0]){
            return true;
          
        }else{
bool remainingPart=checkFound(arr+1,key,size-1);
   return remainingPart; }
}
int main(){
    int arr[5]={3,2,1,6,5};
    bool ans=checkFound(arr,1,5);
    if(ans){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}
