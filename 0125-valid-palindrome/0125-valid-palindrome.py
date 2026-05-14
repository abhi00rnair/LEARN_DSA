class Solution:
    def isPalindrome(self, s: str) -> bool:
        rett=""
        for i in range(len(s)):
            if(s[i].isalnum()):
                rett=rett+s[i]
        temp=rett.lower()
        i=0
        j=len(rett)-1

        while(i<=j):
            if(temp[i]!=temp[j]):
                return False
            else:
                i+=1
                j-=1
        return True