for _ in range(int(input())):
    n, s, k = list(map(int, input().split()))
    d = {el:0 for el in list(map(int, input().split()))}
    res = 0
    while True:
        if s + res <= n and s + res not in d:
            break
        if s - res >= 1 and s - res not in d:
            break
        res += 1
    print(res)
