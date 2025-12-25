class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        n=len(happiness)
        happiness.sort(reverse=True)
        rett=0
        for i in range(0,k):
            maxxi=happiness[0]
            if maxxi-i >0:
                rett=rett+maxxi-i
                count=i+1
            happiness.pop(0)
        return rett        