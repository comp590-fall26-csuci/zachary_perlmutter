DIR := ./590MakefileLab

test: main
	./main

main: fib.o
	cc $(DIR)/main.c fib.o -lm -I$(DIR)/headers -o main
	chmod a+x main

fib.o:
	cc -c $(DIR)/fibonacci.c -I$(DIR)/headers -o fib.o	

clean:
	rm -f fib.o main
