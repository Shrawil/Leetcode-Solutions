class Solution(object):
    def subsets(self, nums):
        subset = [[]]
        for num in nums:
            subset += list(cur + [num] for cur in subset)
        print(subset)

a = Solution()
a.subsets([1,2,3])