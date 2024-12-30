class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int cmin=nums[0],cmax=nums[0],mp=nums[0],i,n=nums.size(),temp;
        for(i=1;i<n;i++){
            temp=max({nums[i],cmin*nums[i],cmax*nums[i]});
            cmin=min({nums[i],cmin*nums[i],cmax*nums[i]});
            cmax=temp;
            mp=max(mp,cmax);
        }
        return mp;
    }
};
