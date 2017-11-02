main: y.tab.c y.tab.h lex.yy.c
	gcc -o syntaxAnalyzer main.c scanner.c beamer.c y.tab.c lex.yy.c -lfl -ly -ll -lm 
 
y.tab.c y.tab.h:      
	bison -yd bison.y

lex.yy.c: 
	flex flex.l

removefiles:
	rm y.tab.c
	rm y.tab.h
	rm lex.yy.c

removeincludes:
	sudo rm /usr/include/include1.h
	sudo rm /usr/include/include2.h
copyincludes:
	sudo cp /home/manriquedv/Escritorio/syntaxAnalyzer/includes/include1.h /usr/include/
	sudo cp /home/manriquedv/Escritorio/syntaxAnalyzer/includes/include2.h /usr/include/

