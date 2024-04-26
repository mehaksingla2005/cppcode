//You are given an array 'a' of 'n' integers.
//A majority element in the array ‘a’ is an element that appears more than 'n' / 2 times.
//Find the majority element of the array.
//It is guaranteed that the array 'a' always has a majority element.
//Example:
//Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]


int majorityElement(vector<int> v) {
	// Write your code here
	int n=v.size();
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(v[i]==v[j]){
				cnt++;
			}
		}if(cnt>(n/2)){
			return v[i];
		}
	}
}
