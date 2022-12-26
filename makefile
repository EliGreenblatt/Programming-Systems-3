all: Isort.o txtfind.o

Isort.o: Isort.c
	gcc -Wall -c Isort.c -o isort

txtfind.o: txtfind.c
	gcc -Wall -c txtfind.c -o txtfind