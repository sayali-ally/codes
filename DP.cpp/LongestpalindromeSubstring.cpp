class Solution {
public:
    string longestPalindrome(string s) {
        int n =s.size();
        bool dp[n][n];
        memset(dp,0,sizeof(dp));
        int maxL=1;
        int start=0;
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }

        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                maxL=2;
                dp[i][i+1]=1;
                start=i;
            }
        }

        for(int k=3;k<=n;k++){
            for(int i=0;i<n-k+1;i++){
                int j=i+k-1;

                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=1;
                    if(k>maxL){
                        maxL=k;
                        start=i;
                    }
                }
            }
        }

        string res="";
        for(int i=start;i<=start+maxL-1;i++){
            res+=s[i];
        }
        return res;
    }
};