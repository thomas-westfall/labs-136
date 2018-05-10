CXXFLAGS=-std=c++14
main: main.o funcs.o 
	g++ -o main main.o funcs.o

poem: poem.o
	g++ -o poem poem.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

tests.o: tests.cpp funcs.o


main.o: main.cpp funcs.h
	g++ $(CXXFLAGS) -c main.cpp

poem.o: poem.cpp
	g++ $(CXXFLAGS) -c poem.cpp

funcs.o: funcs.cpp funcs.h
	g++ $(CXXFLAGS) -c funcs.cpp



clean:
	rm -f main.o funcs.o tests.o poem.o



