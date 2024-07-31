class Solution {
public:
    bool canJump(vector<int>& nums) {
        long mx=0,i,n=nums.size();
        for(i=0;i<n;i++){
            if(mx<i){
                return false;
            }
            mx=max(i+nums[i],mx);
            if(mx>=n-1){
                return true;
            }
        }
        return false;
    }
};
