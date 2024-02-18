#include<iostream>
using namespace std;

int sum(int *arr,int size){
    
    if(size==0){
        return 0;
    }if(size==1){
        return arr[0];
    }else{
     int remainingPart=sum(arr+1,size-1);
     int ans=arr[0]+remainingPart;
     return ans;
      
       
        
    }
}
 
int main(){
    int arr[5]={2,4,5,6,7};
    int size=5;
    cout<<sum(arr,5);
}
