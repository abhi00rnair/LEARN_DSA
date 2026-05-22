class Solution:
    def search(self, nums: List[int], target: int) -> int:
        if len(nums)<=1 and nums[0]!=target:
            return -1
        i,n=0,len(nums)
        while(i<n-1 and nums[i]<nums[i+1]):
            i+=1
        low,high=0,0
        if i==n-1:
            low=0
            high=n-1
        elif target>=nums[0]:
            low=0
            high=i
        else:
            low=i+1
            high=n-1
        
        while(low<=high):
            mid=(low+high)//2
            if nums[mid]==target:
                return mid
            elif nums[mid]<target:
                low=mid+1
            else:
                high=mid-1
        return -1
