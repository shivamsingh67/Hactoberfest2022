#ramnitcode27
for _ in range(int(input())):
    n,s=int(input()),input()
    if n%2!=0:
        print("NO")
    else:
        mp={}
        vt=[]
        for i in range(n):
            mp[s[i]]+=1
        for i in mp:
            vt.append(mp[i])
