target = 7
nums = [2,3,1,2,4,3]

res = len(nums)
left = 0
sum = 0
for right in range(len(nums)):
    sum += nums[right]
    while sum >= target:
        res = min(res, (right - left)+1)
        sum -= nums[left]
        left += 1
print(res)