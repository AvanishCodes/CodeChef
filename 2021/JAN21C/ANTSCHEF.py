for _ in range(int(input())):
    n = int(input())
    lines = []
    line = list(map(int, input().split())
    positives = 0
    negatives = 0
    for i in range(1, len(line)):
        number = line[i]
        if number > 0:
            positives += 1
        else:
            negatives += 1

    print(positives*negatives)