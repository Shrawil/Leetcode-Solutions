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

class Solution(object):
    def letterCombinations(self, digits):
        if len(digits) < 1:
            return ""
        if len(digits) == 1:
            return COMBINATIONS[digits[0]]
        res = []
        for i in range(len(digits)-1):
            for letter1 in COMBINATIONS[digits[i]]:
                for letter2 in COMBINATIONS[digits[i+1]]:
                    word = letter1 + letter2
                    res.append(word)
        return res

a = Solution()
print(a.letterCombinations("2"))