class Solution {
    void isvalid(vector<vector<char>>& grid,int i,int j,int l,int w)
    {
        if((i<l && i>=0) && (j>=0 && j<w))
        {
            if(grid[i][j]=='1')
            {
            grid[i][j]='2';
            isvalid(grid,i+1,j,l,w);
            isvalid(grid,i-1,j,l,w);
            isvalid(grid,i,j+1,l,w);
            isvalid(grid,i,j-1,l,w);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
       int i,j,l=grid.size(),w=grid[0].size(),c=0;
       for(i=0;i<l;i++)
       {
           for(j=0;j<w;j++)
           {
               if(grid[i][j]=='1')
               {
                  isvalid(grid,i,j,l,w);
                  c++;
               }
           }
       }
       return c;  
    }
};
