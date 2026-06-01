class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        cost.sort(reverse=True)
        rett,i=0,0
        while i<len(cost):
            if i+1<len(cost):
                rett+=cost[i]
                i+=1
                rett+=cost[i]
                i+=2
            else:
                rett+=cost[i]
                i+=1
        
        return rett
