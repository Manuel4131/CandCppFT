CC=g++
CFLAGS= -c -Wall
all: exe

exe: mergeSort.o
	$(CC) mergeSort.o -o exe

mergeSort.o: mergeSort.cpp
	$(CC) $(CFLAGS) mergeSort.cpp -o mergeSort.o
