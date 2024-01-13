class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector<int>>vv;
        vv.push_back({1});
        vv.push_back({1,1});
        for(int i=2;i<=n;i++)
        {
            vector<int>v(i+1,1);
            for(int j=1;j<i;j++)
            {
                v[j]=vv[i-1][j-1]+vv[i-1][j];
            }
            vv.push_back(v);
        }
        return vv[n];
    }
};
