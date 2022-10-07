#ramnitcode27
for _ in range(int(input())):
    n,s=int(input()),input()
    x=""
    for i in s:
        if i=='a' or i=='e' or i=='i' or i=='o' or i=='u':
            x+='1'
        else:
            x+='0'
    # print(x)
    lst=list(map(int,x))
    # print(lst)
    # zeros=[0]*n
    # zeros[n-1]=1-lst[n-1]
    # for i in range(n-2,-1,-1):
    #     zeros[i]=zeros[i+1]
    #     if x[i]=='0':
    #         zeros[i]+=1
    # count=0
    # for i in range(n):
    #     if lst[i]==1:
    #         count+=zeros[i]
    # print(count)
    k=x.count('1')
    # print(k)
    temp,mid,l,r,m=0,k//2,0,k,0
    for i in range(0,len(lst)):
        if lst[i]==1:
            lst[m]=i
            m+=1
    for i in range(0,k):
        temp+=abs(lst[mid]-lst[i])-abs(mid-i)
    res=temp
    while r<m:
        temp+=(lst[r]-lst[mid+1 if(k&1) else mid])-(lst[mid]-lst[l])
        l+=1
        r+=1
        mid+=1
        res=min(res,temp)
    print(res)

# def countSubstring(S, N):
#     prevSum = {}
#     res = 0
#     currentSum = 0
 
#     for i in range(N):
#         if (S[i] >= 'A' and S[i] <= 'Z'):
#             currentSum += 1
#         else:
#             currentSum -= 1

#         if (currentSum == 0):
#             res += 1
#         if (currentSum in prevSum):
#             res += (prevSum[currentSum])
#         if currentSum in prevSum:
#             prevSum[currentSum] += 1
#         else:
#             prevSum[currentSum] = 1
#     return res