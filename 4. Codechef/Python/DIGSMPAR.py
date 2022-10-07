#ramnitcode27
def sumD(n):
    s=str(n)
    sum=0
    for i in range(len(s)):
        sum+=int(s[i])
    return sum

for _ in range(int(input())):
    n=int(input())
    # if n%10!=9:
    #     print(n+1)
    # else:
    #     print(n+2)
    sumN=sumD(n)
    for i in range(n+1,n+10):
        if sumD(i)%2!=sumN%2:
            print(i)
            break