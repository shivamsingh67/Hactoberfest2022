#ramnitcode27
t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    count=1
    mod=1e9+7
    for i in s:
        if i=='c' or i=='g' or i=='l' or i=='r':
            count=(count*2)%mod
    print(count)