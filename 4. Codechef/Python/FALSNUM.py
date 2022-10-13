#ramnitcode27
t=int(input())
for i in range(t):
    s=input()
    w=""
    if s[0]>'1':
        w+="1"+s
    else:
        w+="10"+s[1:-1]
    print(w)