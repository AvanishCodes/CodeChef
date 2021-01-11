# CodeChef Problem: Fair Election
# Contest: JAN20C(January Long Chaeelenge)

def findSwaps(John, Jack):
    JohnSum = sum(John)
    JackSum = sum(Jack)
    if JohnSum > JackSum:
        return 0
    # Sort both the arrays
    # To make John win, the sum of John's votes has to be more than those of Jack's
    # hence, we'll check first if John can win or not?
    John.sort()
    Jack.sort(reverse=True)
    
    swaps = 0
    for i in range(min(len(John), len(Jack))):
        John[i], Jack[i] = Jack[i], John[i]
        swaps += 1
        JohnSum += John[i] - Jack[i]
        JackSum += Jack[i] - John[i]
        if JohnSum > JackSum:
            return swaps
    return -1


for _ in range(int(input())):
    # For each test case:
    n, m = map(int, input().split())
    John = list(map(int, input().split()))
    Jack = list(map(int, input().split()))
    print(findSwaps(John, Jack))