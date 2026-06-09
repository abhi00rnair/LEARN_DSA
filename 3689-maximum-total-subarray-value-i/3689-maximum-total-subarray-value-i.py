class Solution:
    def maxTotalValue(self, nums: List[int], k: int) -> int:
        maxii=nums[0]
        minni=nums[0]
        for it in nums:
            maxii=max(maxii,it)
            minni=min(minni,it)
        val=maxii-minni
        return val*k