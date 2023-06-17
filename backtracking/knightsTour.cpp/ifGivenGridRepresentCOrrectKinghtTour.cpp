2596. Check Knight Tour Configuration

class Solution {
public:
    bool isSafe(int x,int y,int n){
        return (x>=0 && x<n && y>=0 && y<n);
    }
    bool isSafeMove(int x,int y,vector<vector<int>>&grid){
        int n=grid.size();
        int dr[] = {-2,-1,1,2,2,1,-1,-2};
        int dc[] = {1,2,2,1,-1,-2,-2,-1};

        for(int i=0;i<8;i++){
            int nr=x+dr[i];
            int nc=y+dc[i];
            if(isSafe(nr,nc,n)){
                if(grid[nr][nc]==grid[x][y]+1)return true;
            }
        }
        return false;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]!=0)return false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==n*n-1)continue;
                else if(isSafeMove(i,j,grid)==false)return false;
            }
        }
        return true;
    }
};