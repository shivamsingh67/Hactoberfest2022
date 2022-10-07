#ramnitcode27
t=int(input())
for i in range(t):
    x=int(input())
    a=list(map(int,input().split()))
    ans = [a[0]]
    for i, j in enumerate(a[1:]):
        if j != a[i]:
            ans.append(j)
    print(len(ans))