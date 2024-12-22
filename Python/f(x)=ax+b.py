a, b = map(int, input().split())
if a == 0:
    print(f"f(x)={b}")
elif a == 1:
    print(f"f(x)=x{'+' if b > 0 else ''}{b}" if b != 0 else "f(x)=x")
elif a == -1:
    print(f"f(x)=-x{'+' if b > 0 else ''}{b}" if b != 0 else "f(x)=-x")
elif b == 0:
    print(f"f(x)={a}x")
else:
    print(f"f(x)={a}x{'+' if b > 0 else ''}{b}")