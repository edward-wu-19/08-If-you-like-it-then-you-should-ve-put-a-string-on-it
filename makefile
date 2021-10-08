all: main.o string.o
	gcc -o work08 main.o string.o

main.o: main.c
	gcc -c main.c

string.o: string.c
	gcc -c string.c

clean:
	rm -rf work08 main.o string.o

run:
	./work08