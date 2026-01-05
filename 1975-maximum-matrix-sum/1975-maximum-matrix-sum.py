class Solution:
    def maxMatrixSum(self, matrix: List[List[int]]) -> int:
        n=len(matrix)
        rett=0
        count=0
        minval=float('inf')
        for i in range(0,n):
            for j in range(0,n):
                val=matrix[i][j]
                if val<0:
                    count+=1
                minval=min(minval,abs(val))
                rett+=abs(val)
        if count%2==0:
            return rett
        return rett-2*minval