def explore(path, ob, cb, n, res):
    if len(path) == n * 2:
        res.append(path)
        return 
    if ob < n:
        explore(path + "(", ob+1, cb, n, res)
    if cb < ob:
        explore(path + ")", ob, cb+1, n, res)

class Solution(object):
    def generateParenthesis(self, n):
        res = []
        explore("", 0, 0, n, res)
        return res
    
a = Solution()
print(a.generateParenthesis(3))