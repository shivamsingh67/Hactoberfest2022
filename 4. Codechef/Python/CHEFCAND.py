#ramnitcode27
import math
for _ in range(int(input())):
    n,x=map(int,input().split())
    if n-x<=0:
        print(0)
    else:
        print(math.ceil((n-x)/4))