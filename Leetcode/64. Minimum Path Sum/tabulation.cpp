class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int i,j;
        for(i=1;i<grid.size();i++)
        {
            grid[i][0]=grid[i][0]+grid[i-1][0];
        } 
        for(i=1;i<grid[0].size();i++)
        {
            grid[0][i]=grid[0][i]+grid[0][i-1];
        }
        for(i=1;i<grid.size();i++)
        {
            for(j=1;j<grid[i].size();j++)
            {
                grid[i][j]=grid[i][j]+min(grid[i-1][j],grid[i][j-1]);
            }
        }
        return grid[grid.size()-1][grid[0].size()-1];
    }
};
