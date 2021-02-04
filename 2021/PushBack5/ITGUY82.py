for _ in range(int(input())):
    n = int(input())
    start = 1
    for i in range(1, n+1):
        string = ""
        end = (i*i+i)//2
        start = (i*i-i)//2
        if(i%2 == 0):
            for j in range(end, start, -1):
                string += str(j) + '*'
                continue
        else:
            for j in range(start+1, end+1, 1):
                string += str(j) + '*'
                continue
        print(string[:len(string)-1])
        continue
    continue
