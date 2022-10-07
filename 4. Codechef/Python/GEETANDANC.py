#ramnitcode27
n=int(input())
a=list(map(int,input().split()))
for _ in range(int(input())):
    A,B,C=map(int,input().split())
    if a[A-1]==a[B-1]==C:
        print("YES")
        continue
    ancestor=[]
    for i in range(n):
        mem=[]
        j=i
        while a[j]!=j+1:
            mem.append(a[j])
            j=a[j]-1
        ancestor.append(mem)
    # print(ancestor)
    if C in ancestor[A-1] and C in ancestor[B-1]:
        print("YES")
    else:
        print("NO")