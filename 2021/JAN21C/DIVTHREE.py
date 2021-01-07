for _ in range(int(input())):   # _ is the number of test cases
    n, k, d = map(int, input().split())
    # n is the number of available setters
    # k is the number of problems required for a contest
    # d is the maximum number of days for which contest can be held
    arr = list(map(int, input().split()))
    # Total number of available problems
    total = sum(arr)
    maxDays = min(total//k, d)
    print(maxDays)
