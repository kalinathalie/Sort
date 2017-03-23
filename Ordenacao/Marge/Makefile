PROG = execMargeSort
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o MargeSort.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : main.cpp 	
	$(CC) $(CPPFLAGS) -c Sort.h main.cpp

MargeSort.o : MargeSort.cpp 	
	$(CC) $(CPPFLAGS) -c Sort.h MargeSort.cpp

clean:
	rm -f core $(PROG) $(OBJS)
