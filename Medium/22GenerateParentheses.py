class Solution(object):
    def generateParenthesis(self, n):
        ob = "(" * n
        cb = ")" * n
        braces = ob + cb
        for i in range(n):
            for j in range(n):
                print(braces[i], braces[j])

a = Solution()
print(a.generateParenthesis(3))