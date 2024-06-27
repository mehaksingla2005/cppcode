#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
            else{
                return true;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"the number is a prime no"<<endl;
    }
    cout<<"the number is not a prime no"<<endl;
    return 0;
}