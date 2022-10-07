#ramnitcode27
def val(x,y):
    return aminus[i]+a[i]+a[len(a)-1]
    
for _ in range(int(input())):
    n,m=map(int,input().split())
    aminus=[]
    a=list(map(int,input().split()))
    ans=-float(1e9)
    a.sort()
    for i in range(len(a)):
        aminus.append((a[i]-a[len(a)-1])%m)
    for i in range(len(a)):
        if ans<val(a,aminus):
            ans=max(ans,val(a,aminus))
    print(ans)

# #ramnitcode27
# for _ in range(int(input())):
#     n,m=map(int,input().split())
#     a=list(map(int,input().split()))
#     # a.sort()
#     m1=max(a)
#     m2=0
#     # print(sorted(a))
#     for i in reversed(sorted(a)):
#         if(i<m1):
#             m2=i
#             break
#     # print(m1,m2)
#     ans=m1+m2+max(((m1-m2)%m),((m2-m1)%m))
#     print(ans)

# #ramnitcode27
# for _ in range(int(input())):
#     n,m=map(int,input().split())
#     a=list(map(int,input().split()))
#     a=set(a)
#     m1=max(a)
#     a.remove(m1)
#     m2=max(a)
#     ans=m1+m2+max(((m1-m2)%m),((m2-m1)%m))
#     print(ans)