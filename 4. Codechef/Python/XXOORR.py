#ramnitcode27
for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    bin=[0]*32
    for y in range(32):
        for j in a:
            if j&(1<<y):
                bin[y]+=1
    res=0
    for i in bin:
        if i%k==0:
            res+=i//k
        else:
            res+=i//k+1
    print(res)