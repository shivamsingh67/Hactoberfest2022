#ramnitcode27
for _ in range(int(input())):
    x,y=map(int,input().split())
    if x==y:
        print("ANY")
    elif x<y:
        print("FIRST")
    else:
        print("SECOND")