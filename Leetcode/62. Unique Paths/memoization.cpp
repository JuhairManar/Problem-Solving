class Solution {

    int up(int i,int j,vector<vector<int>>&v)
    {
        if(i==0 || j==0)
        {
            return 1;
        }
        if(v[i][j])
        {
            return v[i][j];
        }
        v[i][j]=up(i-1,j,v)+up(i,j-1,v);
        return v[i][j];
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>v(m,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            v[0][i]=1;
        }
        for(int i=0;i<m;i++)
        {
            v[i][0]=1;
        }
        return up(m-1,n-1,v);
    }
};
