import math
def hcf(a,b):
    if a>b:
        a,b=b,a
    while b!=0:
        a,b=b,a%b
    return a

for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if(n==1):
        print("1")
        continue
    fwd=[1]*(n)
    bwd=[1]*(n)
    fwd[0]=a[0]
    bwd[-1]=a[-1]
    gcd=[0]*n
    for i in range(1,n):
        fwd[i]=hcf(fwd[i-1],a[i])
    for i in range(n-2,-1,-1):
        bwd[i]=hcf(bwd[i+1],a[i])
    gcd[0]=bwd[1]
    gcd[n-1]=fwd[n-2]
    for i in range(1,n-1):
        gcd[i]=hcf(fwd[i-1],bwd[i+1])
    total=sum(a)
    ans=math.inf
    for i in range(n):
        x=((total-a[i])//gcd[i])+1
        ans=min(x,ans)
    print(ans)