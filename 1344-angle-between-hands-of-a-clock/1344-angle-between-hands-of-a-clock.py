class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        # no of degree when minute from start
        min_hand=6*minutes
        hr_hand=30*hour+0.5*minutes

        balance=abs(min_hand-hr_hand)
        return min(balance, 360-balance)