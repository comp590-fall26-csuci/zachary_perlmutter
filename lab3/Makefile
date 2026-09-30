DIR := ./590MakefileLab

main: fib.o
	cc $(DIR)/main.c fib.o -lm -I$(DIR)/headers -o main
	chmod a+x main

fib.o:
	cc -c $(DIR)/fibonacci.c -I$(DIR)/headers -o fib.o

test_output: main
	diff <(./main) scripts/expected.txt

clean:
	rm -f fib.o main
