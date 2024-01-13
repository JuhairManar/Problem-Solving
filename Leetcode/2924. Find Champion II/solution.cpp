class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>a(n),v;
        int mn=INT_MAX,i;
        for(auto g:edges)
        {
            a[g[1]]++;
            mn=min(a[g[1]],mn);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==mn)
            {
                v.push_back(i);
            }
            else if(a[i]<mn)
            {
                v.clear();
                mn=a[i];
                v.push_back(i);
            }
        }
        if(v.size()>1)
        {
            return -1;
        }
        return v[0];
        //return 1;
    }
};
