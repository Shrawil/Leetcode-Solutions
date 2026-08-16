nums = [2, 7, 11, 15]
target = 9

temp = dict()
for i in range(len(nums)):
    complement = target - nums[i]

    if complement in temp:
        print([temp[complement], i])

    temp[nums[i]] = i