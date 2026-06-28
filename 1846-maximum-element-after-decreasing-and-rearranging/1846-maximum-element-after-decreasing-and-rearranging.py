class Solution:
    def maximumElementAfterDecrementingAndRearranging(self, arr: List[int]) -> int:
        arr.sort()
        rett=1
        arr[0]=1
        for i in range(1,len(arr)):
            if abs(arr[i]-arr[i-1]>1):
                arr[i]=arr[i-1]+1
            rett=max(rett,arr[i])
        return rett
