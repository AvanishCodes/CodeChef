for testcase in range(int(input())):
    n, k = map(int, input().split())
    arr = []
    flag = False
    If there have to be n positive cumulative sums
    if n == k:
        i = 1
        arr = [i for i in range(1, n+1)]
        flag = True
    if not flag:
        negativeSummations = 0
        currentSummation = 0
        for i in range(n):
            if k < 
        
    print(*arr)