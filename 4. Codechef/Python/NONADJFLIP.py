#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    s=input()
    flag=0
    if s.count("1")==0:
        print("0")
        continue
    for i in range(n-1):
        if s[i]=='1' and s[i+1]=='1':
            flag=1
            break
    if flag==1:
        print("2")
    else:
        print("1")