nums = [1, 2, 3, 4]

left = 0
right = len(nums)-1
prod = 1
for i in range(len(nums)):
    prod = prod * nums[i]

res = list(map(lambda x : prod//x, nums))
print(res)