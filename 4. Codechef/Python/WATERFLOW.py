#ramnitcode27
t=int(input())
for i in range(t):
    a,b,c,d=map(int,input().split())
    if(a+c*d>b):
        print("overflow")
    elif((a+c*d)<b):
        print("unfilled")
    else:
        print("filled")