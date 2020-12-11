from math import floor
for case in range(int(input())):
    a, b = map(int, input().split())
    res = floor(a/2) + floor(b/2) + floor((a+1)/2) + floor((b+1)/2)
    print(res)
