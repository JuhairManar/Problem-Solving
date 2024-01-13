class Solution {
public:
    int a[46];
    Solution()
    {
        for(int i=1;i<46;i++)
        {
            a[i]=-1;
        }
    }

    int climbStairs(int n) {
        if(n<0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1;
        }
        if(a[n]==-1)
        {
          a[n]=climbStairs(n-1)+climbStairs(n-2);  
        }
        return a[n];
    }

};
