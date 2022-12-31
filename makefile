all: isort txtfind

isort.c:
	gcc -Wall -c isort.c -o isort
txtfind.c:
	gcc -Wall -c txtfind.c -o txtfind
