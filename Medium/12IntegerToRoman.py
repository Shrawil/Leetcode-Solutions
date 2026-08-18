class Solution(object):
    def intToRoman(self, num):
        values = [
            (1000, "M"),
            (900, "CM"),
            (500, "D"),
            (400, "CD"),
            (100, "C"),
            (90, "XC"),
            (50, "L"),
            (40, "XL"),
            (10, "X"),
            (9, "IX"),
            (5, "V"),
            (4, "IV"),
            (1, "I"),
        ]
        result = ""
        for val, symbol in values:
            while num >= val:
                num -= val
                result += symbol
        return result

a = Solution()
print(a.intToRoman(49))