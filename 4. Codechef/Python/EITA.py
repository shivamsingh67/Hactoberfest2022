#ramnitcode27
t=int(input())
for _ in range(t):
    d,x,y,z=map(int,input().split())
    if (x*7)>(y*d+z*(7-d)):
        print(x*7)
    else:
        print(y*d+z*(7-d))