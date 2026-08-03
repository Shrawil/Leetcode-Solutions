def checkPalList(s, idx, idxs):
    largest = ""
    start = idx
    for i in idxs:
        stop = i
        w1 = s[start:stop+1:1]
        if w1 == w1[::-1]:
            if len(w1) > len(largest):
                largest = w1[::-1]
    return largest

class Solution(object):
    def longestPalindrome(self, s):
        if len(s) <= 1:
            return s
        #print(f"Word = {s}")
        curPal = ""
        bestPal = s[0]
        for i in range(len(s)):
            curWord = s[i]
            idx = []
            for j in range(i+1, len(s)):
                #print(f"{curPal}, {bestPal} | {i}, {j} | {curWord}, {s[j]}")
                if curWord == s[j]:
                    #print(curWord == s[j])
                    idx.append(j)
            curPal = checkPalList(s, i, idx)
            #print(curPal)
            if len(curPal) > len(bestPal):
                bestPal = curPal
        return bestPal

a = Solution()
print(a.longestPalindrome("abc"))