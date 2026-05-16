class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict={}
        rett=[]
        for i in range(0,len(nums)):
            val=nums[i]
            if (target-nums[i]) in dict:
                rett.append(i)
                rett.append(dict[target-nums[i]])
                break
            else :
                dict[nums[i]]=i
        return rett