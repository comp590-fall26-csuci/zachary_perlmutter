def fib(n,a=0,b=1):
    if n > 0:
        yield a
        yield from fib(n-1,b,a+b)

print(*fib(25),file=open("output/lab1.txt","w"))
