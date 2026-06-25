class Solution:
    def countMajoritySubarrays(self, nums: List[int], target: int) -> int:
        rett=0
        for i in range(0,len(nums)):
            dict={}
            for j in range(i,len(nums)):
                if nums[j] not in dict:
                    dict[nums[j]]=1
                else:
                    dict[nums[j]]+=1
                if target in dict and 2*dict[target]>(j-i)+1:
                    rett+=1
        
        return rett