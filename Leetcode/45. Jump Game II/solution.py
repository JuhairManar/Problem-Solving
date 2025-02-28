class Solution:
    def jump(self, nums: List[int]) -> int:
        if len(nums)==1:
            return 0
        c=0
        n=len(nums)-1
        mn=n-1
        i=0

        while(i<n):
            t=i
            a=nums[i]
            c+=1


            if i+a>=n or mn<=0:
                return c
            

            for j in range(1,a+1):
                if n-(t+j+nums[t+j])<mn:
                    mn=n-(t+j+nums[t+j])
                    i=t+j
        
        return c
