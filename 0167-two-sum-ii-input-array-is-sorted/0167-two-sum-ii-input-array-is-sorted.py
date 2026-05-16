class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left,right= 0,len(numbers)-1
        rett=[]
        while (left<=right):
            if (numbers[left]+numbers[right]>target):
                right-=1
            elif (numbers[right]+numbers[left]<target):
                left+=1
            else :
                rett.append(left+1)
                rett.append(right+1)
                break
        return rett