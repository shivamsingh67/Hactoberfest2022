#ramnitcode27
# from os import system
import math
for _ in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    res=[0]*3
    heighestPower=int(pow(2,int(math.log(n,2))))
    # for i in range(heighestPower,):
    i=heighestPower
    while(i>0):
        diff=lst[i]-lst[0]
        if diff<0:
            diff*=-1
            count=diff//i
            if count==1:
                count=2
                if(res[0]^i)<=n:
                    res[0]^=i
                    count-=1
                if count and (res[1]^i)<=n:
                    res[1]^=i
                    count-=1
                if count>0 and (res[2]^i)<=n:
                    res[2]^=i
            elif count==3:
                res[0]^=i
                res[1]^=i
                res[2]^=i
        else:
            count=diff//i
            if count==1:
                if (res[0]^i)<=n:
                    res[0]^=i
                elif (res[1]^i)<=n:
                    res[1]^=i
                else:
                    res[2]^=i
        res.sort()
        i/=2
    print(res[0],res[1],res[2])
