class Solution {

    int psn(int n,vector<int>&dp)
    {
        if(n==0)
        {
            return 0;
        }
        if(dp[n]!=10002)
        {
            return dp[n];
        }
        for(int i=1;i*i<=n;i++)
        {
            dp[n]=min(1+psn((n-(i*i)),dp),dp[n]);
        }
        return dp[n];
    }
public:
    int numSquares(int n) {
        vector<int>dp(n+1,10002);
        return psn(n,dp);
    }
};
