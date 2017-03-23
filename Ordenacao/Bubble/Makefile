PROG = execBubbleSort
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o BubbleSort.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : main.cpp 	
	$(CC) $(CPPFLAGS) -c Sort.h main.cpp

BubbleSort.o : BubbleSort.cpp 	
	$(CC) $(CPPFLAGS) -c Sort.h BubbleSort.cpp

clean:
	rm -f core $(PROG) $(OBJS)
