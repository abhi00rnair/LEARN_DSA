class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        dict_lower={}
        dict_upper={}
        for i in range(0,len(word)):
            ch=word[i]
            if ch.islower():
                dict_lower[ch]=i
            elif ch.isupper():
                if ch not in dict_upper:
                    dict_upper[ch]=i
        
        rett=0
        for ch in dict_lower:
            upper = ch.upper()
            if upper in dict_upper:
                if dict_lower[ch]<dict_upper[upper]:
                    rett+=1
        
        return rett