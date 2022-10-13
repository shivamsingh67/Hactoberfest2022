#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    p=list(map(int,input().split()))
    maxiSum=-1*(10**9)
    currSum=0
    for i in range(n):
        currSum+=p[i]
        if currSum>maxiSum:
            maxiSum=currSum
        if currSum<0:
            currSum=0
    mod=10**9+7
    if maxiSum<0:
        maxiSum%=mod*(-1)
        print(maxiSum)
        continue
    print(maxiSum%mod)