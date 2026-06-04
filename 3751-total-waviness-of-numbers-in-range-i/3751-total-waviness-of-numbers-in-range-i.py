class Solution:
    def totalWaviness(self, num1: int, num2: int) -> int:
        rett=0
        for i in range(num1,num2+1):
            s=str(i)
            for j in range(1,len(s)-1):
                prev=int(s[j-1])
                curr=int(s[j])
                nxt=int(s[j+1])
                if (prev>curr and nxt>curr) or (prev<curr and nxt<curr):
                    rett+=1
        return rett