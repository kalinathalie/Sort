PROG = execQuickSort
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o QuickSort.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : main.cpp 	
	$(CC) $(CPPFLAGS) -c Sort.h main.cpp

QuickSort.o : QuickSort.cpp 	
	$(CC) $(CPPFLAGS) -c Sort.h QuickSort.cpp

clean:
	rm -f core $(PROG) $(OBJS)
