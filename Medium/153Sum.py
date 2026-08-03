# 3 Sum

class Solution(object):
    def threeSum(self, nums):
        ls = set()
        nums = sorted(nums)
        
        for i in range(len(nums)):
            left = i + 1
            right = len(nums) - 1
            while left < right:
                if i == left or i == right or left == right:
                    break
                triplets = sorted([nums[i], nums[left], nums[right]])
                sum = nums[i] + nums[left] + nums[right]
                if sum == 0:
                    ls.add(tuple(triplets))
                if sum > 0:
                    right -= 1
                else:
                    left += 1
        return list(ls)

a = Solution()
print(a.threeSum([-1,0,1,2,-1,-4]))