#ramnitcode27
def hcf(a,b):
    if b==0:
        return a
    else:
        return hcf(b,a%b)

for _ in range(int(input())):
    a,b=map(int,input().split())
    if a!=1 and b!=1:
        if hcf(a,b)==1:
            print(1)
        else:
            print(0)
    else:
        print(-1)