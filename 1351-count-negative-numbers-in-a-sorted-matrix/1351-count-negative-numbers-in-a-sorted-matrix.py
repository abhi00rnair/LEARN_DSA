class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        n=len(grid)
        m=len(grid[0])
        rett=0
        for x in range(0,n):
            i=0
            j=m-1
            while i<=j:
                mid=(i+j)//2
                if grid[x][mid]>=0:
                    i=mid+1
                else:
                    j=mid-1
            rett+=(m-i)
        return rett
