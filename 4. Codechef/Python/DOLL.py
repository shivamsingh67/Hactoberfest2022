#ramnitcode27
for _ in range(int(input())):
    n,k=map(int,input().split())
    h=list(map(int,input().split()))
    k=max(n,k)
    count=0
    for i in h:
        if i>=k:
            count+=1
    print(count)