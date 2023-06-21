Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.

An interleaving of two strings s and t is a configuration where s and t are divided into n and m 
substrings
 respectively, such that:


class Solution {
public:
    bool check(string s1,string s2,string s3,int n1,int n2,int n3,int i1,int i2,int i3,vector<vector<vector<int>>>&dp){
        if(i3==n3 && i2==n2 && i1==n1)
        return 1;

        if(i3==n3)return 0;
        if(dp[i1][i2][i3]!=-1) return dp[i1][i2][i3];

        int a=0;
        if(i1<n1 && s1[i1]==s3[i3])
        a=check(s1,s2,s3,n1,n2,n3,i1+1,i2,i3+1,dp);
        int b=0;
        if(i2<n2 && s2[i2]==s3[i3])
        b=check(s1,s2,s3,n1,n2,n3,i1,i2+1,i3+1,dp);

        return dp[i1][i2][i3]=a || b;

    }
    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.size();
        int n2=s2.size();
        int n3=s3.size();
        vector<vector<vector<int>>>dp(n1+1,vector<vector<int>>(n2+1,vector<int>(n3+1,-1)));
        return check(s1,s2,s3,n1,n2,n3,0,0,0,dp);
    }
};