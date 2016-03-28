all: flex
	g++ bison.tab.c lex.yy.c -ll -o out
	./out

flex: bison
	flex flex.l
	
bison:
	bison -d bison.y
