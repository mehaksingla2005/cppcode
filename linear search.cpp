#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<=n;i++){
        if(arr[i]==key){
            return i;
            break;
        }
    
    }return 0;
}
int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    cout<<"enter the element to search for"<<endl;
    int key;
    cin>>key;
    bool found=linearsearch(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;

    }else{
        cout<<"key is absent"<<endl;
    }
return 0;

}