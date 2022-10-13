#ramnitcode27
for _ in range(int(input())):
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c1,c2=0,0
    for i in range(len(a)):
        if a[i]>b[i]:
            c1+=1
        else:
            c2+=1
    if c1>c2:
        print("A")
    else:
        print("B")