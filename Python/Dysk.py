def encode_to_disk(data):
    disk = ['D', 'D', 'D', 'D']
    for bit in data:
        prev = disk[-1]
        if bit == '1':
            disk.append('G' if prev == 'D' else 'D')
        else:
            disk.append(prev)
    return ''.join(disk)

def decode_from_disk(disk):
    data = []
    for i in range(4, len(disk)):
        prev = disk[i - 1]
        current = disk[i]
        if prev != current:
            data.append('1')
        else:
            data.append('0')
    return ''.join(data)

data = input()
if all(c in '01' for c in data):
    print(encode_to_disk(data))
else:
    print(decode_from_disk(data))