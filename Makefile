all:
	clear
	rm -f lex.yy.c
	rm -f y.tab.c
	rm -f compilator
	yacc -d compilator.y
	lex compilator.l
	gcc lex.yy.c y.tab.c -o compilator
	./compilator input.txt
rm:
	rm -f lex.yy.c
	rm -f y.tab.c
	rm -f compilator
	rm y.tab.h