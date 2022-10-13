#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    c,c1=0,0
    # sort the given lst
    lst.sort()
    # print(lst)
    for i in range(n):
        if lst[i]!=1:
            c1+=1
        else:
            c+=1
    diff=abs(c-c1)
    if diff==2 and c&1==0 and c1&1==0:
        print("YES")
    elif diff<2:
        print("YES")
    else:
        print("NO")

# #Ramnit here
# t=int(input())
# for t in range(t):
#     n=int(input())
#     l=list(map(int,input().strip().split()))[:n]
#     cnt=0
#     one=0
#     l.sort()
#     for i in range(len(l)):
#         if l[i]!=1:
#             one+=1
#         else:
#             cnt+=1
#     print("YES" if abs(cnt-one)==2 and cnt&1==0 and one&1==0 else "YES" if abs(cnt-one)<2 else "NO")

# t=int(input())
# for i in range(t):
#     a=0
#     b=0
#     n=int(input())
#     x=list(map(int,input().split()))
#     x.sort()
#     for i in range(0,n):
#         if(x[i]!=1):
#             b=b+1
#         else:
#             a=a+1
#     if(a%2==0 and b%2==0 and abs(a-b)==2):
#         print("yes")
#     else:
#         print("yes" if (abs(a-b)<2) else "no")