class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        nums.sort()
        n=len(nums)
        if n<2:
            return 0
        rett=0
        for i in range(0,n-1):
            if nums[i+1]-nums[i]>rett:
                rett=nums[i+1]-nums[i]
        return rett