### Makefile ###

all: prog run clean rmpoper

prog: main.o clientes.o simulation.o
	gcc -Wall -o prog main.o clientes.o simulation.o -lm

simulation.o: simulation.c
		gcc -c simulation.c

clientes.o: clientes.c
	gcc -c clientes.c

main.o: main.c
	gcc -c main.c

clean:
	rm -rf  *.o

rmpoper: clean
	rm -rf prog

run: prog clean
	./prog #<in.txt #>out.txt
