class Solution:
    def numOfStrings(self, patterns: List[str], word: str) -> int:
        rett=0
        for i in range(0,len(patterns)):
            curr=patterns[i]
            x,y=0,len(curr)
            while(y<=len(word)):
                txt=word[x:y]
                if txt==curr:
                    rett+=1
                    break
                else:
                    x+=1
                    y+=1
        return rett
