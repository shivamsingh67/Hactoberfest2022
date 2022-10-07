#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    even,odd=0,0
    for i in a:
        if i%2==0:
            even+=1
        else:
            odd+=1
    if odd==n or even==n:
        print("0")
        continue
    if(odd%2==0):
        print(min(even,odd//2))
    else:
        print(even)