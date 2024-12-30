for _ in range(100):
    time, parameter = map(float, input().split())
    time_in_ms = time * 1000
    remainder = time_in_ms % parameter
    if remainder >= parameter / 2.0:
        rounded_time = time_in_ms + (parameter - remainder)
    else:
        rounded_time = time_in_ms - remainder
    print(int(rounded_time))