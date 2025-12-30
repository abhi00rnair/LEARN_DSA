class Solution:
    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
        n=len(grid)
        m=len(grid[0])
        rett=0
        if n<3 or m<3:
            return 0  
        tp=True
        for i in range(0,n-2):
            for j in range(0,m-2):
                tp=True
                if grid[i+1][j+1]!=5:
                    tp=False
                st=set()
                for x in range(0,3):
                    for y in range(0,3):
                        val=grid[i+x][j+y]
                        if val<1 or val>9 or val in st:
                            tp=False
                        else:
                            st.add(val)
                for x in range(i,i+3):
                    rowsum=0
                    for y in range(j,j+3):
                        rowsum+=grid[x][y]
                    if rowsum!=15:
                        tp=False
                for y in range(j, j+3):
                    colosum=0
                    for x in range(i, i+3):
                        colosum+=grid[x][y]
                    if colosum!=15:
                        tp=False
                if grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2]!=15:
                    tp=False
                if grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]!=15:
                    tp=False
                if tp==True:
                    rett+=1
        return rett