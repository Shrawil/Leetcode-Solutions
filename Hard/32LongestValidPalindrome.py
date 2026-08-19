class Solution(object):

    def longestValidParentheses(self, s):
        stack = [-1]
        max_len = 0

        for i, char in enumerate(s):
            if char == "(":
                stack.append(i)
            else:
                stack.pop()
                if not stack:
                    stack.append(i)
                else:
                    if max_len < (i - stack[-1]):
                        max_len = i - stack[-1]

        return max_len