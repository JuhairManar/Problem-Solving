class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //pair<long,int>min{1e6,-1},max{-1,-1};
        int i,n=prices.size(),mn=prices[0],mx=-1,s=0;
        for(i=1;i<n;i++)
        {
            if(prices[i]<mn)
            {
                mn=prices[i];
                mx=-1;
                //continue;
            }
            if(prices[i]>mx)
            {
                mx=prices[i];
                s=max(s,mx-mn);
            }
        }
        return s;
    }
};
