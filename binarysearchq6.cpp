/*square root using binary search*/
#include<iostream>
using namespace std;
long long int binarysearch(int n){
    int s=0;
    int e =n;
    long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square>n){
            e=mid-1;
        }else{
            ans=mid;
            s=mid+1;
        }
         mid=s+(e-s)/2;

    }
}
int sqrt(int n){
    return binarysearch(n);
}
int main(){
    cout<<"enter the no whose square root you want to know"<<endl;
    cout<<"the no is"<<endl;
    int n;
    cin>>n;
    return 0;

}