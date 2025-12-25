class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        n=len(happiness)
        happiness.sort(reverse=True)
        count=0
        rett=0
        for i in range(1,k+1):
            maxxi=happiness[0]
            if maxxi-count >0:
                rett=rett+maxxi-count
                count=count+1
            happiness.pop(0)
        return rett        