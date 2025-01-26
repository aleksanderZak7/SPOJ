SEGMENTS = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

def count_segments(time):
    mm, ss = time.split(':')
    return SEGMENTS[int(mm[0])] + SEGMENTS[int(mm[1])] + SEGMENTS[int(ss[0])] + SEGMENTS[int(ss[1])]

def find_min_max_times(n):
    possible_times = []
    for minutes in range(15, 60):
        for seconds in range(0, 60):
            time = f'{minutes:02}:{seconds:02}'
            if count_segments(time) == n:
                possible_times.append(time)
    return possible_times[0], possible_times[-1]

t = int(input())
for _ in range(t):
    n = int(input())
    min_time, max_time = find_min_max_times(n)
    print(f'{min_time} {max_time}')