// vector<int> sort(vector<int> book){
//     int n=book.size();
    
//     for(int i=1;i<=n-1;i++){
//         int j=i;
//         while(j>0 && book[j-1]>book[j]){
//             swap(book[j-1],book[j]);
//             j--;
//         }
//     }
//     return book;
// }

string read(int n, vector<int> book, int target)
{
    // Write your code here.
     sort(book.begin(),book.end());
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=book[left]+book[right];
        if(sum==target){
            return "YES";
        }
        else if(sum>target){
            right--;
        }
        else{
            left++;
        }
       
    }
     return "NO";


}
