main.o: main.c linked-list.h
	gcc -c main.c

linked-list.o: linked-list.c linked-list.h
	gcc -c linked-list.c

launch: main.o linked-list.o
	gcc main.o linked-list.o -o launch