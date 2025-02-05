class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;

        int i,j,k,n=nums.size();

        sort(nums.begin(),nums.end());

        set<vector<int>>st;

        for(i=0;i<n-2;i++){
            int a=nums[i];
            j=i+1;
            k=n-1;

            while(j<k){
                int b=nums[j],c=nums[k];

                if(a+b+c==0) {
                    if(st.find({a,b,c}) == st.end()){
                        st.insert({a,b,c});
                        v.push_back({a,b,c});
                    }                    
                    j++;k--;
                    continue;
                }
                if(a+b+c<0) j++;
                else k--;
            }
        }

        return v;
    }
};
