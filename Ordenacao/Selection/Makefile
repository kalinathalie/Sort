PROG = execSelectionSort
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o SelectionSort.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : main.cpp 	
	$(CC) $(CPPFLAGS) -c Sort.h main.cpp

SelectionSort.o : SelectionSort.cpp 	
	$(CC) $(CPPFLAGS) -c Sort.h SelectionSort.cpp

clean:
	rm -f core $(PROG) $(OBJS)
