#ramnitcode27
# from os import system
for _ in range(int(input())):
    n=int(input())
    odd,mini=0,1e9
    lst=list(map(int,input().split()))
    for i in lst:
        if i&1:
            odd+=1
        if i<=mini:
            mini=i
    if mini==1:
        print("CHEF")
    elif odd%2==0:
        print("CHEFINA")
    else:
        print("CHEF")