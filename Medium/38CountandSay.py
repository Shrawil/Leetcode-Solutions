class Solution(object):
    def countAndSay(self, n):
        strNum = str(n)
        for _ in range(n):
            count = 1
            res = ''
            for i in range(len(strNum)-1):
                if strNum[i] == strNum[i+1]:
                    count += 1
                else:
                    res += (str(count)+strNum[i])
            res += (str(count)+strNum[-1])
            strNum = res 
        print(res)
        

a = Solution()
a.countAndSay(4)