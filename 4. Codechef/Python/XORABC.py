#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    # to check if n is a power of 2
    if n&(-1*n)==n or n%2!=0:
        print("-1")
    else:
        a=(n&(-1*n))//2
        b=n/2
        c=(n-n&(-1*n))//2
        print(a,b,c)