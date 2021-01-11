# CodeChef Problem: Point Of Impact
# Contest: JAN20C(January Long Chaeelenge)

class point():
    x = 0
    y = 0
    def __init__(self, x, y):
        self.x = x
        self.y = y


for _ in range(int(input())):
    # For each test case:
    n, k, x, y = map(int, input().split())
    # print(origin.x, origin.y)
    strikes = [point, point, point, point]
    if x == y:
        origin = point(x, y)
        strikes = [point(n, n), point(n, n), point(n, n), point(n, n)]
    # The below code is True when the board starts with 0 and not 1 in both directions
    if x > y:
        origin = point(x-y, 0)
        strikes = [origin, point(n, n - origin.x), point(n- origin.x, n), point(0, origin.x)]
    if y > x:
        origin = point(0, y-x)
        strikes = [origin, point(n - origin.y, n), point(n, n - origin.y), point(origin.y, 0)]
    # print(f"New Origin: {origin.x}, {origin.y}")
    # for strike in strikes:
    #     print(strike.x, strike.y)
    print(strikes[(k)%4].x, strikes[(k)%4].y)
