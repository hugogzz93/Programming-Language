all: main.o semanticCube.o procedureRecord.o
	g++ -Wall -std=c++11 main.o -o out
	./out

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

semanticCube.o:
	cd SemanticCube; make

procedureRecord.o:
	cd DirProcs; make