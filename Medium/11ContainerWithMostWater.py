class Solution(object):
    def maxArea(self, height):
        if len(height) < 3:
            return min(height)
        dist = 0
        maxArea = min(height)
        left = 0 
        right = len(height)-1
        while left < right:
            dist = right - left
            area = dist * min(height[left], height[right])
            if maxArea < area:
                maxArea = area
            if height[left] > height[right]:
                right -= 1
            else:
                left += 1
        return maxArea
    
a = Solution()
print(a.maxArea([8, 7, 2, 1]))