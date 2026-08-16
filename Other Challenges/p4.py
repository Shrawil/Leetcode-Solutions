nums = [-2,1,-3,4,-1,2,1,-5,4]

best = nums[0]
cur = nums[0]
for i in range(1, len(nums)):
    if nums[i] > cur + nums[i]:
        cur = nums[i]
    else:
        cur = cur + nums[i]
    if cur > best:
        best = cur
print(best)