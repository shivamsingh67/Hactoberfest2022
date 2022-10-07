#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    if n%2!=0:
        print("-1")
    else:
        s=""
        for i in range(n):
            if i%2==0:
                s+="1"
            else:
                s+="0"
        print(s)