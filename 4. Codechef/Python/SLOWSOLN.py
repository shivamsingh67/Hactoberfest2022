#ramnitcode27
import math
for _ in range(int(input())):
    maxT,maxN,sumN=map(int,input().split())
    s,n=0,sumN//maxN
    # i=0
    while n and maxT:
        s+=maxN**2
        n-=1
        maxT-=1
        # print(i)
        # i+=1
    if maxT>0:
        s+=(sumN%maxN)**2
    print(s)
    