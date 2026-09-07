def fib(n):
    a,b=0,1
    for _ in range(n):
        yield a
        a,b=b,a+b

print(*fib(25),file=open("output/lab1.txt","w"))
