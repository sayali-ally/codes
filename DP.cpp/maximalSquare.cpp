class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m= matrix[0].size();
        if(matrix.empty())
        return 0;
        
        int dp[n][m];
        memset(dp,0,sizeof(dp));
        
        int largest =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || matrix[i][j]=='0')
                    dp[i][j]=matrix[i][j] - '0';
                else
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                largest=max(dp[i][j],largest);

            }
        }
        return largest*largest;
    }
};