class Solution {

    int max_rob(vector<int>&nums,vector<int>&dp,int i)
    {
        if(i<0)
        {
            return 0;
        }
        if(i==0)
        {
            return nums[0];
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        dp[i]=max(nums[i]+max_rob(nums,dp,i-2),max_rob(nums,dp,i-1));
        return dp[i];
    }
public:
    int rob(vector<int>& nums) {
        //nums.push_back(0);
        int n=nums.size(),i;
        vector<int>dp(n,-1);
        
        return max_rob(nums,dp,n-1);
    }
};

//2 7 9 3 1
//2 7 9 20 1
