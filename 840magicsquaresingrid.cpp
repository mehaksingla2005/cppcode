class Solution {
private:
    int findRowSum(vector<vector<int>>& grid,int row,int col){
        vector<int> visited(10,0);
        int sum=0;
        for(int i=0;i<3;i++){
            int rowSum=0;
            for(int j=0;j<3;j++){
                int val=grid[row+i][col+j];
                if(val==0 || val>=10 || visited[val]){
                    return -1;
                }
                visited[val]=1;
                rowSum+=val;
            }
            if(i==0)sum=rowSum;
            else{
                if(sum!=rowSum){
                    return -1;
                }
            }
        }
        return sum;

    }
    int findColSum(vector<vector<int>>& grid,int row,int col){
        vector<int> visited(10,0);
        int sum=0;
        for(int i=0;i<3;i++){
            int colSum=0;
            for(int j=0;j<3;j++){
                int val=grid[row+j][col+i];
                
                colSum+=val;
            }
            if(i==0)sum=colSum;
            else{
                if(sum!=colSum){
                    return -1;
                }
            }
        }
        return sum;

    }
    int diagonalSum(vector<vector<int>>& grid,int row,int col){
        int sum1=grid[row][col]+grid[row+1][col+1]+grid[row+2][col+2];
        int sum2=grid[row][col+2]+grid[row+1][col+1]+grid[row+2][col];
        if(sum1==sum2)return sum1;
        return -1;
    }
    bool isMagicSquare(vector<vector<int>>& grid,int row,int col){
        int rowSum=findRowSum(grid,row,col);
        if(rowSum==-1)return false;
        int colSum=findColSum(grid,row,col);
        if(colSum==-1)return false;
        int diagSum=diagonalSum(grid,row,col);
        if(diagSum==-1)return false;
        if(rowSum==colSum && rowSum==diagSum)return true;
        return false;
    }
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int count=0;
        for(int i=0;i<rows-2;i++){
            for(int j=0;j<cols-2;j++){
                if(isMagicSquare(grid,i,j)){
                    count++;
                }
            }
        }
        return count;
    }
};
