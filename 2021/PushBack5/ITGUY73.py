for _ in range(int(input())):
    n = int(input())
    for i in range(n):
        string = ""
        for i in range(1, n-i):
            string += str(i)