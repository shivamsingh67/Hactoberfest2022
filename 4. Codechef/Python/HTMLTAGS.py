#ramnitcode27
import string
t=int(input())
for i in range(t):
    tag=str(input())
    res="Success"
    if len(tag)>=4 and tag[0:2]=="</" and tag[-1]==">":
        for i in range(2,len(tag)-1):
            if (tag[i]>="a" and tag[i]<="z") or (tag[i]>="0" and tag[i]<="9"):
                continue
            else:
                res="Error"
    else:
        res="Error"
    print(res)