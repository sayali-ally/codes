
class Solution 
{
    public:
    #define UNASSIGNED 0
    bool FindUnassigned(int x,int y, grid[n][n]){
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(grid[i][j]==UNASSIGNED)
                return true;
            }
        }
        return false;
    }
    bool usedInrow(int x,int num,int grid[n][n]){
        for(int i=0;i<n;i++){
            if(grid[x][i]==num)
            return true;
        }
        return false;
    }
    bool usedIncol(int num,int y,int grid[n][n]){
           for(int i=0;i<n;i++){
            if(grid[i][y]==num)
            return true;
        }
        return false;
    }
    bool usedInbox(int num,int boxStartRow,int boxStartCol, int grid[n][n]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[i+boxStartRow][j+boxStartCol]==num)
                return true;
            }
        }
        return false;
    }
    bool isSafe(int x,int y,int grid[n][n],int num){
        if(!usedInrow(x,num,grid) && !usedInbox(num,x-x%3,y-y%3,grid) && !usedIncol(num,y,grid) && grid[x][y]==UNASSIGNED )
    }
    bool SolveSudoku(int grid[n][n])  
    { 
        int x,y;
        if(!FindUnassigned(x,y,grid))return true;
        
        for(int i=1;i<=9;i++){
            if(isSafe(x,y,grid,i)){
                 grid[x][y]=i;
                 
                 if(SolveSudoku(grid))
                 return true;
                 
                 else
                 grid[x][y]=UNASSIGNED;
            }
            
        }
        return false;
    }
    void printGrid (int grid[n][n]) 
    {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
        } 
    }
};