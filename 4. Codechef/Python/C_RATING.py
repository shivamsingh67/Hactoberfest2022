#ramnitcode27
for _ in range(int(input())):
    x,y=map(int,input().split())
    count=0
    while x<y:
        count+=1
        x+=8
    print(count)