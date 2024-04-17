void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
    for(int i=0;i<n;i++){
      int minindex=0;
      for(int j=1;j<n-i;j++){
        if(arr[minindex]>arr[j]){
          swap(arr[minindex],arr[j]);
        }
        minindex=j;
      }
    }
}
