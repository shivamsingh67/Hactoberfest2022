#ramnitcode27
for _ in range(int(input())):
    x,y=map(int,input().split())
    if x>y/2:
        print("FIRST")
    elif x<y/2:
        print("SECOND")
    else:
        print("ANY")


# t=int(input())
# for t in range(t):
    # x,y=int(input()),int(input())
    # y/=2
    # print("FIRST" if x>y else "SECOND" if x<y else "ANY")