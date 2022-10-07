#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    # input list of strings
    a=list(map(str,input().split()))
    c1,c2=0,0
    for i in a:
        if i=="START38":
            c1+=1
        elif i=="LTIME108":
            c2+=1
    print(c1,c2)