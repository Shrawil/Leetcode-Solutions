
class Solution(object):
    def letterCombinations(self, digits):
        COMBINATIONS = {
            '2':('a','b','c'),
            '3':('d','e','f'),
            '4':('g','h','i'),
            '5':('j','k','l'),
            '6':('m','n','o'),
            '7':('p','q', 'r','s'),
            '8':('t','u','v'),
            '9':('w','x','y', 'z'),
        }
        if len(digits) < 1:
            return ""
        if len(digits) == 1:
            return COMBINATIONS[digits[0]]
        res = [""]
        for digit in digits:
            new = []
            for i in res:
                for item in COMBINATIONS[digit]:
                    new.append(i+item)
            res = new
        return res
    
a = Solution()
print(a.letterCombinations("223"))