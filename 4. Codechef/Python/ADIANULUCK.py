#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    blocks=list(map(int,input().split()))
    p1,p2,count=0,0,0
    while max(blocks)>0:
        if count%2==0:
            p1+=max(blocks)
            blocks[blocks.index(max(blocks))]=max(blocks)//2
        else:
            p2+=max(blocks)
            blocks[blocks.index(max(blocks))]=max(blocks)//2
        count+=1
    print(abs(p1-p2))