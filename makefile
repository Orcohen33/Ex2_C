CC = gcc
FLAGS = -Wall -g



all: connections
connections: main.c my_mat.c my_mat.h
	$(CC) $(FLAGS) main.c my_mat.c my_mat.h -o connections

.PHONY: clean all

clean:
	rm -f connections
