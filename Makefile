CFLAGS=-std=c++11 -Wall -Wextra

#all: main

main: main.cpp String.h String.o
	g++ $(CFLAGS) main.cpp String.o -o main

#main.o: main.cpp String.h
#	g++ $(CFLAGS) -c String.cpp -o main.o

String.o: String.cpp String.h
	g++ $(CFLAGS) -c String.cpp -o String.o

clean:
	rm *.o main
