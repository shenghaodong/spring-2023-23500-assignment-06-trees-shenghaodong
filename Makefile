main: main.o node.o tree.o
	g++ -o main main.o tree.o node.o

tests: tests.o node.o tree.o
	g++ -o tests tests.o tree.o node.o


node.o: node.cpp node.h

tree.o: tree.cpp tree.h node.h

main.o: main.cpp tree.h node.h

tests.o: tests.cpp doctest.h tree.h node.h

clean:
	rm -f main.o tree.o node.o tests.o