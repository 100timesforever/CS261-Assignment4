all: prog_num prog_name

prog_num: bst.o compare_num.o
	gcc -g -Wall -std=c99 -o prog_num bst.o compare_num.o

prog_name: bst.o compare_name.o
	gcc -g -Wall -std=c99 -o prog_name bst.o compare_name.o

compare_num.o: compare_num.c
	gcc -g -Wall -std=c99 -c compare_num.c

compare_name.o: compare_name.c
	gcc -g -Wall -std=c99 -c compare_name.c
		
bst.o: bst.c bst.h
	gcc -g -Wall -std=c99 -c bst.c

clean:	
	rm bst.o
	rm compare_num.o
	rm compare_name.o
	rm prog_num
	rm prog_name
