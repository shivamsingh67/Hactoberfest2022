#ramnitcode27
for _ in range(int(input())):
    n,x=map(int,input().split())
    a=[]
    # count=1
    # x=x*n
    if n%2==0:
        # a.append(0)
        # a.append(x)
        # for i in range(2,n,2):
        #     if count!=x:
        #         a.append(count)
        #         a.append(count*-1)
        #     else:
        #         count+=1
        #         a.append(count)
        #         a.append(count*-1)
        #     count+=1
        for i in range(x+n//2+1,x-n//2,-1):
            if i==x:
                continue
            else:
                a.append(i)
            
    else:
        # a.append(x)
        # for i in range(1,n,2):
        #     if count!=x:
        #         a.append(count)
        #         a.append(count*-1)
        #     else:
        #         count+=1
        #         a.append(count)
        #         a.append(count*-1)
        #     count+=1
        for i in range(x+n//2+1,x-n//2,-1):
            a.append(i)
    # print(a)
    for i in a:
        print(i,end=" ")
    print()