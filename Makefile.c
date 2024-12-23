CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: main

main: main.o sort_algorithms.o performance.o utils.o
	$(CC) $(CFLAGS) -o main main.o sort_algorithms.o performance.o utils.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

sort_algorithms.o: sort_algorithms.c sort_algorithms.h
	$(CC) $(CFLAGS) -c sort_algorithms.c

performance.o: performance.c performance.h
	$(CC) $(CFLAGS) -c performance.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

clean:
	rm -f *.o main

