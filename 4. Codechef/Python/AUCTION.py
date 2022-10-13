#ramnitcode27
for _ in range(int(input())):
    a,b,c=map(int,input().split())
    if max(a,b,c)==a:
        print("Alice")
    elif max(a,b,c)==b:
        print("Bob")
    else:
        print("Charlie")