class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        rett=[]
        for i in range(1,n+1):
            if (i%3==0 and i%5==0):
                rett.append("FizzBuzz")
            elif (i%3==0):
                rett.append("Fizz")
            elif (i%5==0):
                rett.append("Buzz")
            else:
                rett.append(str(i))
        return rett