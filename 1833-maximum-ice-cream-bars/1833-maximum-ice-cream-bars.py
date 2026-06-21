class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        costs.sort()
        rett=0
        for it in costs:
            if it<=coins:
                coins-=it
                rett+=1
            elif it>coins:
                break
        return rett