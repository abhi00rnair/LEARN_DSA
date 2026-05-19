class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        dict={}
        for it in nums1:
            if it not in dict:
                dict[it]=1
            else:
                dict[it]+=1
        rett=float("inf")
        for it in nums2:
            if it in dict:
                rett=min(rett,it)
        return -1 if rett==float("inf") else rett