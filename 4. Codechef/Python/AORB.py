#ramnitcode27
for _ in range(int(input())):
    x,y=map(int,input().split())
    case1=500-(x*2)+1000-((x+y)*4)
    case2=500-((x+y)*2)+1000-(y*4)
    print(max(case1,case2))