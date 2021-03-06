all: flex semanticCube procedureDirectory
	g++ -w -std=c++11 bison.tab.c lex.yy.c SemanticCube.o ProcedureRecord.o ProcedureDirectory.o VariableRecord.o -ll -o out
	clear
	./out

flex: bison
	flex flex.l
	
bison:
	bison -d bison.y

semanticCube:
	g++ -w -std=c++11 -c SemanticCube.cpp

procedureDirectory: procedureRecord
	g++ -w -std=c++11 -c ProcedureDirectory.cpp

procedureRecord: variableRecord
	g++ -w -std=c++11 -c ProcedureRecord.cpp	

variableRecord:
	g++ -w -std=c++11 -c VariableRecord.cpp	