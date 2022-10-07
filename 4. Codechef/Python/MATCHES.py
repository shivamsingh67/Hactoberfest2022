#ramnitcode27
for _ in range(int(input())):
    matches=[6,2,5,5,4,5,6,3,7,6]
    a,b=map(int,input().split())
    count=0
    c=a+b
    size=len(str(c))
    for i in range(size):
        temp=c%10
        c=c//10
        count+=matches[temp]
    print(count)