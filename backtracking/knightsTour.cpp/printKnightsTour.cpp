
bool isSafe(int x,int y,int n){
        return (x>=0 && x<n && y>=0 && y<n);
}
void printSol(int sol[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sol[i][j]<<" ";
        }
    }
}

int isSolveKTUTIL(int x,int y, int sol[n][n],int move){
    if(sol[0][0]!=0)return;

    if(move == n*n-1)return;

    int r[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int c[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    for(int i=0;i<8;i++){
        int nr=x+r[i];
        int nc=y+c[i];
        if(isSafe(nr,nc,n)){
            sol[nr][nc]=move;
            if(isSolveKTUTIL(nr,nc,sol,move+1)==1)return;
            else
            sol[nr][nc]=-1   //backtrack
        }
    }
    return 0;
}

int solveKT(){
    int sol[n][n];
    if(isSolveKTUTIL(0,0,sol,1))==1;
    printSol();
}