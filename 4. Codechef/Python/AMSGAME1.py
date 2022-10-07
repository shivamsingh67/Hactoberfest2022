#ramnitcode27
from math import gcd
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    diff=a[0]
    for i in range(1,n):
        diff=gcd(diff,a[i])
    print(diff)