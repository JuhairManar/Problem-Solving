class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int i,n=rungs.size(),c=(rungs[0]-1)/dist;

        for(i=0;i<n-1;i++){
            c+=((rungs[i+1]-1)-rungs[i])/dist;
        }
        return c;
    }
};
