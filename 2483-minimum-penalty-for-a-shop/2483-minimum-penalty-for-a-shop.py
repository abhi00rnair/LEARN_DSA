class Solution:
    def bestClosingTime(self, customers: str) -> int:
        n=len(customers)
        rett=n
        noofY=0 
        noofN=0
        lisofN=list()
        lisofY=list()
        for i in customers:
            if i=='N':
                noofN=noofN+1
            else:
                noofY=noofY+1
            lisofN.append(noofN)
            lisofY.append(noofY)  
        total=noofN+noofY
        irett=0
        for i in range(0,n+1):
            if i==0:
                N_before=0
                Y_after=noofY
            elif i==n:
                N_before=noofN
                Y_after=0
            else:
                Y_after=noofY-lisofY[i-1]
                N_before=lisofN[i-1]

            penality=N_before+Y_after
            if rett>penality:
                irett=i
                rett=penality
        return irett