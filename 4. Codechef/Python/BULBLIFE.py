#ramnitcode27
for _ in range(int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    if x*n<=sum(a):
        print(0)
        continue
    print(x*n-sum(a))

# #ramnitcode27
# t=int(input())
# for z in range(range(t)):
#     n,x=int(input()),int(input())
#     a=[]
#     for i in range(n):
#         a.append(int(input()))
#     if sum(a)>x*n:
#         print(0)
#     else:
#         print(x*n-sum(a))