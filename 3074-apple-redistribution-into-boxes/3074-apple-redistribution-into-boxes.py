class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        sum=0
        for i in apple:
            sum=sum+i
        capacity.sort(reverse=True)
        count=0
        for i in capacity:
            if sum<=0:
                break
            sum=sum-i
            count=count+1        
        return count    