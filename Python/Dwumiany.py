def coefficient(n, k, factorial_cache):
    if n == k or k == 0:
        return 1
    if n == 0:
        return 0
    if (n, k) in factorial_cache:
        return factorial_cache[(n, k)]
    result = 1
    for i in range(1, min(k, n - k) + 1):
        result *= n - i + 1
        result //= i
    factorial_cache[(n, k)] = result
    return result

T = int(input())
factorial_cache = {}
for _ in range(T):
    n, k = map(int, input().split())
    print(coefficient(n, k, factorial_cache))
