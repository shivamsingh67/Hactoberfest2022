#ramnitcode27
t=int(input())
for i in range(t):
    a,b,x=map(int,input().split())
    count=0
    while a<b:
        a+=x
        count+=1
    print(count)