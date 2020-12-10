from math import ceil
for testCases in range(int(input())):
    numberofPersons, personsEachDay = map(int, input().split())
    type1 = 0   # Number of persons with age less than 10 or more than 79
    type2 = 0   # Number of persons with age between 10 and 79
    ages = list(map(int, input().split()))
    for age in ages:
        if age < 10 or age > 79:
            type1 += 1
        else:
            type2 += 1
    numberOfDays = ceil(type1/personsEachDay) + ceil(type2/personsEachDay)
    print(numberOfDays)