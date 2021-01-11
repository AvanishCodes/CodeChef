# Global scope
status = [[-1 for i in range(4004)] for j in range(9009)]


# Modified knapSack function
def knapSack(k, n1, n2, n, arr, N):
    
    if n1 >= k or n2 >= k:
        count = 0
        if n1 < k:
            for i in range(n-1, -1, -1):
                n1 += arr[i]
                count += 1
                if n1 >= k:
                    break
            if n1 >= k:
                return count
            else:
                return 8000
        elif n2 < k:
            for i in range(n-1, -1, -1):
                n2 += arr[i]
                count += 1
                if n2 >= k:
                    break
            if n2 >= k:
                return count
            else:
                return 8000
        else:
            return 0
    elif n == 0:
        return 8000
    if status[n][n1] != -1:
        return status[n][n1]
    include = 1 + knapSack(k, n1 + arr[n-1], n2, n-1, arr, N)
    exclude = 1 + knapSack(k, n1, n2 + arr[n-1], n-1, arr, N)
    status[n][n1] = min(include, exclude)
    return status[n][n1]
    
    # return 0



for _ in range(int(input())):
    # For each test case
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    # Store the array sum in sum variable
    sum = 0
    for element in arr:
        sum += element
        
    flag = True
    arr.sort()
    # print(arr)
    rem = 0
    top = 1

    index = int
    if arr[-1] >= k:
        for i in range(0, n):
            if arr[i] >= k:
                flag = False
                index = i
                break
            continue

    if flag == False:
        for i in range(n-1, -1, -1):
            if i != index:
                rem += arr[i]
                top += 1
            if rem >= k:
                break
        if rem >= k:
            print(top)
        else:
            print('-1')
    else:
        status = [[-1 for i in range(4004)] for j in range(9009)]
        result = knapSack(k, 0, 0, n, arr, n)
        if result < 8000:
            print(result)
        else:
            print('-1')