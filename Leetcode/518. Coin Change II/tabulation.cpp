class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1);
        dp[0] = 1;
        for(auto& x:coins){
            for(int i=x;i<=amount;i++){
                //cout<<dp[i]<<" "<<dp[i-1]<<endl;
                dp[i] += dp[i-x];
            }
        }
        return dp[amount];
    }
};
