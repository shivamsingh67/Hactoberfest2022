#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a=[i for i in a if i>=1000]
    print(len(a))