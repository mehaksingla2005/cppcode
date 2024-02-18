#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"size of array is "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool checkFound(int arr[0],int key,int size){
    print(arr,size);
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
    bool ans=checkFound(arr,6,5);
    if(ans){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}
