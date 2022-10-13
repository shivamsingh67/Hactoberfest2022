#ramnitcode27
for _ in range(int(input())):
    a,b=map(int,input().split())
    c,d=map(int,input().split())
    if a>c or b>d:
        print("IMPOSSIBLE")
    else:
        print("POSSIBLE")