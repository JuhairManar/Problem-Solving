// link - https://leetcode.com/problems/increasing-triplet-subsequence/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=INT_MAX,b=INT_MAX,i,n=nums.size();

        for(auto g:nums){
            if(g<=a) a=g;
            else if(g<=b) b=g;
            else return 1;
        }

        return 0;
    }
};
