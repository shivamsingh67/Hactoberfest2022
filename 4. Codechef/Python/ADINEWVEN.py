#ramnitcode27
for _ in range(int(input())):
    n=int(input())
    five=n//5
    three=(n%5)//3
    one=((n%5)%3)//1
    print(five+three+one)