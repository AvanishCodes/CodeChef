# Take the standard input
D1, V1, D2, V2, P = map(int, input().split())
# Initialize the number of manufactured vaccines to be 0
manufactured = 0
# Number of days passed = 0
days = 0
# This is the day 1
day = 1

# Till the required vaccines are not manufactured
while manufactured < P:
    if day >= D1:
        manufactured += V1
    if day >= D2:
        manufactured += V2
    day += 1
    days += 1
print(days)