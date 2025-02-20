class Solution {
public:
    long maxArea(vector<int>& height) {
        long mx=0,i=0,n=height.size(),j=n-1;

        while(i<j){
            long l=j-i,a=min(height[i],height[j])*l;
            mx=max(mx,a);

            if(height[i]<height[j]) i++;
            else j--;
        }

        return mx;
    }
};
