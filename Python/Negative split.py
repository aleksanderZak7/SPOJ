def parse_time(time_str):
    h, m, s = map(int, time_str.split(':'))
    return h * 3600 + m * 60 + s

def analyze_results(results):
    b = a = d = c = 0
    for result in results:
        times = list(map(parse_time, result.split()))
        if all(times[i] - times[i-1] <= times[i-1] - times[i-2] for i in range(2, 5)) and times[0] > times[3] - times[2]:
            b += 1
            if times[4] <= times[5]:
                a += 1
        else:
            d += 1
            if times[4] <= times[5]:
                c += 1
    return f"{a}/{b} {c}/{d}"

n = int(input())
results = [input() for _ in range(n)]
print(analyze_results(results))