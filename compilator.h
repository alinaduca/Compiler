#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

char buff[100];
int varCount = 0;
int functionsCount = 0;
int fd, fd1;
char errMsg[100];

struct informatii {
    int int_val;
    char string_val[500];
    float float_val;
    char char_val;
};

struct AST {
    struct AST* st;
    struct AST* dr;
    int nodeType;
    char name[20];
};

struct variabila {
    char nume[100];
    char tip[10];
    struct informatii info;
    int local;
    int isConst;
    int inClass;
    int arrSize;
    int arr[100];
    int elemente;
} symbolTable[100];

struct param {
    char nume[100];
    char tip[10];
} temp[10];

struct func {
    char nume[100];
    char tip[20];
    unsigned int nrArgs;
    struct param val[10];
} symbolTableFunctions[100];

void print_error()
{
    printf("Eroare: %s\n", errMsg);
}

void initialize()
{
    for(int i = 0; i < 100; i++)
    {
        bzero(&symbolTable[i].nume, sizeof(symbolTable[i].nume));
        bzero(&symbolTable[i].tip, sizeof(symbolTable[i].tip));
        symbolTable[i].info.int_val = 0;
        symbolTable[i].info.float_val = 0;
        symbolTable[i].arrSize = 0;
        strcpy(symbolTable[i].info.string_val, "");
        symbolTable[i].info.char_val = '\0';
    }
}

void addInTable(int isc, int arrS, char s[], char tip[], int intv, float floatv, char *c, char *strv, int clasa)
{
    if(!strcmp(tip, "tip"))
    {
        int aux = varCount - 1;
        while(!strcmp(symbolTable[aux].tip, "") && aux >= 0)
        {
            strcpy(symbolTable[aux].tip, s);
            symbolTable[aux].isConst = isc;
            symbolTable[aux].inClass = clasa;
            aux--;
        }
    }
    else
    {
        if(!strcmp(tip, "variabila"))
        {
            strcpy(symbolTable[varCount].nume, s);
            symbolTable[varCount].info.int_val = intv;
            symbolTable[varCount].info.float_val = floatv;
            symbolTable[varCount].info.char_val = c[1];
            symbolTable[varCount].arrSize = arrS;
            strcpy(symbolTable[varCount].info.string_val, strv);
            varCount++;
        }
    }
}

void eval(struct informatii *inf)
{
	printf("Valoarea este: %d\n", inf->int_val);
}

void Verif(char s[], int yylineno, int vec)
{
    int i;
    int existaVariabila = 0;
    for(i = 0; i < varCount; i++)
    {
        if(!strcmp(symbolTable[i].nume, s))
        {
            existaVariabila = 1;
            break;
        }
    }
    if(!existaVariabila)
    {
        sprintf(errMsg, "Linia %d, variabila %s nu este declarata!",yylineno, s);
        print_error();
        exit(0);
    }
    else
    {
        if(vec > 0 && symbolTable[i].arrSize == 0)
        {
            sprintf(errMsg, "Linia %d, variabila %s nu este un array!",yylineno, s);
            print_error();
            exit(0);
        }
        else if(vec == 0 && symbolTable[i].arrSize > 0)
        {
            sprintf(errMsg, "Linia %d, variabila %s este un array!",yylineno, s);
            print_error();
            exit(0);
        }
    }
}

void addInTableFunctions(char tipp[], char s[], char type[], int yylineno)
{
    if(!strcmp(type, "tip"))
    {
        for(int i = 0; i < functionsCount; i++)
            if(!strcmp(symbolTableFunctions[i].nume, s))
            {
                sprintf(errMsg, "Linia %d, functia %s nu este definita!",yylineno, s);
                print_error();
                exit(0);
            }
        strcpy(symbolTableFunctions[functionsCount].nume, s);
        strcpy(symbolTableFunctions[functionsCount].tip, tipp);
        functionsCount++;
    }
    else
    {
        if(!strcmp(type, "parametru"))
        {
            strcpy(symbolTableFunctions[functionsCount].val[symbolTableFunctions[functionsCount].nrArgs].nume, s);
            strcpy(symbolTableFunctions[functionsCount].val[symbolTableFunctions[functionsCount].nrArgs].tip, tipp);
            symbolTableFunctions[functionsCount].nrArgs++;
        }
    }
}

void VerifFct(char s[], int yylineno)
{
    int existaFunctie = 0;
    for(int i = 0; i < functionsCount; i++)
    {
        if(!strcmp(symbolTableFunctions[i].nume, s))
        {
            existaFunctie = 1;
            break;
        }
    }
    if(!existaFunctie)
    {
        sprintf(errMsg, "Linia %d, functia %s nu este definita!",yylineno, s);
        print_error();
        exit(0);
    }
}

void Clasa(char s[])
{
    int aux = varCount - 1;
    while(symbolTable[aux].inClass && aux >= 0)
    {
        char auxchar[100];
        bzero(&auxchar, sizeof(aux));
        strcpy(auxchar, symbolTable[aux].nume);
        strcpy(symbolTable[aux].nume, s);
        strcat(symbolTable[aux].nume, ".");
        strcat(symbolTable[aux].nume, auxchar);
        aux--;
    }
}