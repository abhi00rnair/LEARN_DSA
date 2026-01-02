class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        n=int(len(nums)/2)
        dic=dict()
        for i in nums:
            if i not in dic:
                dic[i]=1
            else:
                dic[i]=dic[i]+1
            if dic[i]==n:
                return i
        return 0