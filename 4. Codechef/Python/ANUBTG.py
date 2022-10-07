#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    c=list(map(int,input().split()))
    if n==1:
        print(c[0])
        continue
    c.sort(reverse=True)
    total=0
    for i in range(n):
        if i%4<2:
            total+=c[i]
    print(total)