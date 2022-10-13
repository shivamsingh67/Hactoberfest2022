#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    # canvas=[i+2 for i in range(n-1)]
    # B=1
    # for i in canvas:
    #     if i%2==0:
    #         B^=i
    #     else:
    #         B&=i
    # print(B)
    if n%4==0:
        print(n+3)
    if n%4==3:
        print("3")
    if n%4==1:
        print(n)
    if n%4==2:
        print(3)