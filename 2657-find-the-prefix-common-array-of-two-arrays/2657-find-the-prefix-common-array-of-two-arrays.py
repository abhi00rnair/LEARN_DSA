class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:

        dict={}
        rett=[]
        count=0
        for i in range(0,len(A)):
            val1=A[i]
            val2=B[i]
            if val1 not in dict:
                dict[val1]=1
            else:
                dict[val1]+=1
                if dict[val1]==2: count+=1
            if val2 not in dict:
                dict[val2]=1
            else:
                dict[val2]+=1
                if dict[val2]==2: count+=1
            rett.append(count)
        return rett
        