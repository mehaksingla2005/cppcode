int getFloor(vector<int> &a, int n, int x){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
    int mid=s+(e-s)/2;
	if(a[mid]<=x){
        ans=a[mid];
		s=mid+1;
	}else{
		e=mid-1;
	} 
	}
	return ans;
}
int getCeil(vector<int> &a, int n, int x){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
    int mid=s+(e-s)/2;
	if(a[mid]>=x){
        ans=a[mid];
		e=mid-1;
	}else{
		s=mid+1;
	} 
	}
	return ans;
}


pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	pair<int,int> ans;
	ans.first=getFloor(a,n,x);
	ans.second=getCeil(a,n,x);
	return ans;

}
