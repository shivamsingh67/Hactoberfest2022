#ramnitcode27
for _ in range(int(input())):
    a,b,c,d,e=map(int,input().split())
    if a<=e and (c+b)<=d:
        print("YES")
        continue
    if b<=e and (c+a)<=d:
        print("YES")
        continue
    if c<=e and (a+b)<=d:
        print("YES")
        continue
    print("NO")