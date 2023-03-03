FILES=Makefile main.cpp test.cpp test.h

CC = g++
CFLAGS = -lm

all: main

clean:
	$(RM) *.o

main: main.o test.o
	$(CC) $(CFLAGS) -o main main.o test.o

main.o: main.cpp
	$(CC) -c $(CFLAGS) -o main.o main.cpp

test.o: test.cpp
	$(CC) -c $(CFLAGS) -o test.o test.cpp