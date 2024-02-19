#include<iostream>
using namespace std;
long long int sqrt(int n){
    int arr[n+1];
    int s=0;
    int e=n;
    
    long long int ans=-1;
    while(s<=e){
        long long int mid=s+(e-s)/2;
        if(mid*mid>n){
            e=mid-1;
        }
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else if(mid*mid==n){
            return mid;
        }
        
    }return ans;
}

double morePrecision(int n,int precision,int tempSol){
    double factor =1;
    double ans = tempSol;
    
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
           ans=j; 
        }
    }return ans;
}
int main(){
    int n;
    cout<<"enter the no:";
    cin>>n;
    cout<<"the square root of no n is:"<<sqrt(n)<<endl;
    int tempSol=sqrt(n);
    cout<<"the exact sqrt is "<<morePrecision(n,3,tempSol);
    return 0;
}
