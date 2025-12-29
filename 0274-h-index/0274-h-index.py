class Solution:
    def hIndex(self, citations: List[int]) -> int:
        citations.sort(reverse=True)
        n=len(citations)
        rett=0
        for i in range(0,n):
            if citations[i]>=i+1:
                rett+=1
            else:
                break
        return rett