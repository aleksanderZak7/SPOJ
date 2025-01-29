n = int(input())
for _ in range(n):
    decoded = []
    binary = input().strip()
    groups = [binary[i:i+5] for i in range(0, len(binary), 5) if len(binary[i:i+5]) == 5]
    for group in groups:
        num = int(group, 2)
        decoded_char = chr(num % 26 + ord('A'))
        decoded.append(decoded_char)
    print(''.join(decoded))