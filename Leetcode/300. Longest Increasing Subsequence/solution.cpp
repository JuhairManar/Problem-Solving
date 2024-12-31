class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>v(nums.size(),1);
        int i,j,mx=1,n=nums.size();
        for(i=1;i<n;i++){
            for(j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    v[i]=max(v[i],v[j]+1);
                }
            }
            mx=max(v[i],mx);
        }
        return mx;
    }
};
