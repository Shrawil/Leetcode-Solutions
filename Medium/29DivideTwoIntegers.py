class Solution(object):
    def divide(self, dividend, divisor):
        if divisor == 0 or dividend == 0:
            return 0
        count = 0
        negative = (divisor < 0) ^ (dividend < 0)
        a, b = abs(dividend), abs(divisor)
        while a-b >= 0:
            count += 1
            a -= b
        return -count if negative else count

a = Solution()
print(a.divide(1,1))