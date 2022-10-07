#ramnitcode27
from collections import defaultdict
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    Stick=0
    val=defaultdict(lambda:0)
    for i in l:
        val[i]+=1
    for i in val.keys():
        if val[i]%2!=0:
            Stick+=1
    x=n+Stick
    while x%4!=0:
        Stick+=1
        x+=1
    print(Stick)