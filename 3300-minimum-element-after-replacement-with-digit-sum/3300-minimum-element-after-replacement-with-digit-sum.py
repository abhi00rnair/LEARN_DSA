class Solution:
    def minElement(self, nums: List[int]) -> int:
        rett=nums[0]
        for i in range(0,len(nums)):
            num=nums[i]
            temp=0
            while num:
                temp=temp+(num%10)
                num=num//10
            
            rett=min(rett,temp)
        
        return rett
