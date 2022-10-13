#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    total=sum(a)
    diff,res=1,0
    while 0<total:
        total-=diff
        diff+=1
        res+=1
    if total>0 or total==0:
        print(res)
    else:
        print(res-1)