class Solution {
public:
    int change(int sum, vector<int>& coins) {
       int n=coins.size();
       vector<vector<int>>dp(n+1,vector<int>(sum+1));
       for(int i=1;i<=n;i++){
           dp[i][0]=1;
       }
       for(int i=1;i<=sum;i++){
           dp[0][i]=0;
       }

       for(int i=1;i<=n;i++){
           for(int j=1;j<=sum;j++){
               dp[i][j]=dp[i-1][j];
               if(coins[i-1]<=j)
               dp[i][j]+=dp[i][j-coins[i-1]];
           }
       }
       return dp[n][sum];
    }
};

