#ramnitcode27
for _ in range(int(input())):
    n,a,b=map(int,input().split())
    if a==b or abs(a-b)>2:
        print('0')
    elif abs(a-b)==2:
        print('1')
    else:
        if a==1 or b==1 or a==n or b==n:
            print('1')
        else:
            print('2')