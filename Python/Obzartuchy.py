import math

SECONDS_IN_A_DAY = 86400
num_cases = int(input())
for _ in range(num_cases):
    total_cookies = 0 
    N, M = map(int, input().split())
    baking_times = [int(input()) for _ in range(N)]
    for baking_time in baking_times:
        total_cookies += SECONDS_IN_A_DAY // baking_time    
    print(math.ceil(total_cookies / M))