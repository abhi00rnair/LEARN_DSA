class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        curr,rett=0,0
        for it in gain:
            curr=curr+it
            rett=max(rett,curr)
        return rett