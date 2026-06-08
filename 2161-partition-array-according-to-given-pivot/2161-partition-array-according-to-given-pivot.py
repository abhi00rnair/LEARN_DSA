class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        lis1=[]
        lis2=[]
        count=0
        for it in nums:
            if it<pivot:
                lis1.append(it)
            elif it==pivot:
                count+=1
            else:
                lis2.append(it)
        
        rett=[]
        for it in lis1:
            rett.append(it)
        while count!=0:
            rett.append(pivot)
            count-=1
        for it in lis2:
            rett.append(it)

        return rett