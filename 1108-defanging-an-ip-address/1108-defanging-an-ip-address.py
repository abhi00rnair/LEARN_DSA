class Solution:
    def defangIPaddr(self, address: str) -> str:
        rett=""
        for i in range(len(address)):
            if (address[i]!='.'):
                rett=rett+address[i]
            else:
                rett=rett+'[.]'
        return rett    