ALFABET = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
N = int(input()) 
L = []
S = set()
for _ in range(N):
    x = input().replace(' ', '')
    L.append(x) 
    S.update(x)  
for i in ALFABET:
    if i in S:
        Result = sum(sentence.count(i) for sentence in L)
        print(i, Result)
