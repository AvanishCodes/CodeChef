for _ in range(int(input())):
    n = int(input())
    nn = int(n)
    if n%2 == 0:
        nn += 1
    # midNumberOfStars = (nn+1)//2
    for i in range(n):
        numberOfStars = i+1 if i<=(nn//2) else (nn-i)
        # print(numberOfStars)
        numberOfPounds = n - numberOfStars
        string = '*'*numberOfStars + '#'*numberOfPounds
        if(i%2 == 1):
            string = string[::-1]
        print(str(string))
        continue
    continue