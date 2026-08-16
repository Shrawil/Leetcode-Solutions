nums = [2, 7, 11, 15]
target = 9

left = 0
right = len(nums)-1
res = []

while left < right:
    sum = nums[left] + nums[right]
    if sum == target:
        res.append([left, right])
        break
    elif sum > target:
        right -= 1
    else:
        left += 1
print(res)