#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    c=-1
    # sort the given lst
    # lst.sort()
    # print(lst)
    if sorted(lst)==lst:
        print("YES")
    else:
        for i in range(n-1):
            if lst[i+1]<lst[i]:
                lst[i+1],lst[i]=lst[i],lst[i+1]
                break
        if sorted(lst)!=lst:
            print("NO")
        else:
            print("YES")

# #Ramnit here
# t=int(input())
# for t in range(t):
#     n=int(input())
#     cnt=-1
#     l=list(map(int,input().strip().split()))[:n]
#     cpy=sorted(l)
#     if l!=cpy:
#         for i in range(len(cpy)-1):
#             if l[i]>l[i+1]:
#                 temp=l[i+1]
#                 l[i+1]=l[i]
#                 l[i]=temp
#                 break
#         print("NO" if l!=cpy else "YES")
#     else:
#         print("YES")