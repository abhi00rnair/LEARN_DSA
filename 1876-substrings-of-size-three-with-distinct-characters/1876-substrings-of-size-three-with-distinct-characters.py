class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        rett=0
        for i in range(0, len(s)-2):
            st=set()
            st.add(s[i])
            st.add(s[i+1])
            st.add(s[i+2])
            if len(st)==3:
                rett+=1
        return rett