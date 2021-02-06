for i in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    res = max(arr) - min(arr)
    res *= 2
    print(res)