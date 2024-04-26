int majorityElement(vector<int> v) {
	// Write your code here
	int cnt=0;
	int el;
	for(int i=0;i<v.size();i++){
		if(cnt==0){
			cnt=1;
			el=v[i];
		}
		else if(el==v[i]){
			cnt++;
		}
		else{
			cnt--;
		}
	}return el;
}
