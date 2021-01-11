# CodeChef Problem: Point Of Impact
# Contest: JAN20C(January Long Chaeelenge)

class point():
    x=0
    y=0
    def __init__(self, x, y):
        self.x = x
        self.y = y


for _ in range(int(input())):
    # For each test case:
    n, k, x, y = map(int, input().split())
    origin = point(x, y)
    # print(origin.x, origin.y)
    strikes = [origin, point, point, point]
    if x == y:
        strikes = [point(5, 5), point(5, 5), point(5, 5), point(5, 5)]
        print(strikes[k%4].x, strikes[k%4].y)
        continue
    if x > y:
        strikes = [point(5, 6 - origin.x), point(6 - origin.x, 5), point(1, origin.x), origin]
    if x > y:
        strikes = [point(x + abs(origin.x - 3), 5), point(5, x + abs(origin.x - 3)), point(1, origin.x), origin]