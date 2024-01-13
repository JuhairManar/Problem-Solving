class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size(),i,j;
        vector<vector<int>>v(n,vector<int>(amount+1));
        for(i=0;i<n;i++)
        {
            v[i][0]=1;
        }
        if(coins[0]<=amount)
        {
            for(i=coins[0];i<=amount;i++)
            {
                if(i%coins[0]==0)
                {
                    v[0][i]=1;
                }
            }
        }
        for(i=1;i<n;i++)
        {
            if(coins[i]>amount)
            {
                v[i]=v[i-1];
                continue;
            }
            for(j=0;j<coins[i];j++)
            {
                v[i][j]=v[i-1][j];
            }
            for(j=coins[i];j<=amount;j++)
            {
                v[i][j]=v[i][j]+v[i][j-coins[i]];
            }
        for(auto g:v[i])
        {
            cout<<g<<" ";
        }
        cout<<endl;
        }
        return v[n-1][amount];
    }
};
