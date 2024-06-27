/*to find the floating part of square root*/
#include<iostream>
using namespace std;

int floor(int arr[],int n,int x){
	sort(arr,n);
	int s=0;
	int e=n-1;
	int m=s+(e-s)/2;
	int floor=-1;
	while(s<=e){
	if(arr[m]<x){
		s=m+1;
		floor=m;

        } else if (arr[m] == x) {
                floor = m;
        }
        m = s + (e - s) / 2;
        }return floor;
}
int ceiling(int arr[],int n,int x){
	sort(arr,n);
	int s=0;
	int e=n-1;
	int m=s+(e-s)/2;
	int ceiling=-1;
	while(s<=e){
		if(arr[m]>x){
			e=m-1;
			ceiling=m;
		}
		else if (arr[m] == x) {
                ceiling = m;
        }m=s+(e-s)/2;
	}
return ceiling;
}