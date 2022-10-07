#ramnitcode27
n,q=map(int,input().split())
a=[int(x) for x in input().split()]
# a.append(0)
# for i in range(1,n):
#     ele=int(input())
#     a.append(ele)
a=[0]+a
for _ in range(q):
    query=[int(x) for x in input().split()]
    # for i in range(4):
        # query.append(int(input()))
        # if query[0]==1:
            # continue
        # else:
            # query.append(int(input()))
            # break
    if query[0]==1:
        for i in range(query[1],query[2]+1):
            a[i]+=(query[3]+i-query[1])**2
    else:
        print(a[query[1]])