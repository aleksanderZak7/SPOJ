def max_subarray_sum(arr):
    current_sum = 0
    profit = 0
    for money in arr:
        current_sum += money
        if current_sum > profit:
            profit = current_sum
        if current_sum < 0:
            current_sum = 0
    return profit

n = int(input())
arr = [int(input()) for _ in range(n)]
output = max_subarray_sum(arr)
print(output)
