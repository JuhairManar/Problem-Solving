class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i,n=cost.size();
        vector<int>v(n);
        v[0]=cost[0];
        v[1]=cost[1];
        for(i=2;i<n;i++)
        {
            v[i]=cost[i]+min(v[i-1],v[i-2]);
        }
        return min(v[n-1],v[n-2]);
    }
};
