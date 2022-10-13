#ramnitcode27
for _ in range(int(input())):
    a,b,c=map(int,input().split())
    if a<10 or b<10 or c<10 or a+b+c<100:
        print("Fail")
    else:
        print("Pass")