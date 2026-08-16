h = [1,8,6,2,5,4,8,3,7]

maxArea = 0
i = 0
j = len(h)-1
while i < j:
    area = min(h[i], h[j]) * (j - i)
    print(area)
    if area > maxArea:
        print(area > maxArea)
        maxArea = area
    if h[i] > h[j]:
        print("j -= 1")
        j -= 1
    else:
        print("i += 1")
        i += 1
print(maxArea)