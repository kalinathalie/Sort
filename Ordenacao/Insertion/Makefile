PROG = execInsertionSort
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o InsertionSort.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : main.cpp 	
	$(CC) $(CPPFLAGS) -c Sort.h main.cpp

InsertionSort.o : InsertionSort.cpp 	
	$(CC) $(CPPFLAGS) -c Sort.h InsertionSort.cpp

clean:
	rm -f core $(PROG) $(OBJS)
