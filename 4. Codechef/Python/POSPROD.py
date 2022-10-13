#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    # a=sorted(a)
    # ans=[[i,j] for i in range(n) for j in range(i+1,n) if a[i]*a[j]>0]
    # print(len(ans))
    neg=[i for i in range(n) if a[i]<0]
    pos=[i for i in range(n) if a[i]>0]
    print((len(neg)*(len(neg)-1))//2+(len(pos)*(len(pos)-1))//2)