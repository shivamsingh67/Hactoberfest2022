#ramnitcode27
for _ in range(int(input())):
    a,b=map(int,input().split())
    if b-a<2:
        print("-1")
    elif a%2==0:
        print(a,a+2)
    elif a%3==0 and a+3<=b:
        print(a,a+3)
    elif a%3!=0 and a+3<=b:
        print(a+1,a+3)
    else:
        print("-1")