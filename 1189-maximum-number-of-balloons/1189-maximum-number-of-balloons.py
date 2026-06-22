class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        dict={}
        dict['b']=0
        dict['a']=0
        dict['l']=0
        dict['o']=0
        dict['n']=0

        for it in text:
            if it in dict:
                dict[it]+=1
        ct1=min(dict['b'],dict['a'],dict['n'])
        ct2=min(dict['l'],dict['o'])
        ct2=ct2//2
        rett=min(ct1,ct2)
        if rett<1:
            return 0
        return rett
