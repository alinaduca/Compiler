#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

char lastTypeUsed[20];
char buff[100];
int varCount = 0;
int fd, fd1;
struct informatii{
      int int_val;
      char string_val[500];
      float float_val;
      char char_val;
      int type;
};

struct AST
{
     struct AST* st;
     struct AST* dr;
     int nodeType;
     char name[20];
};

struct param {
      char nume[100];
      char tip[10];
      struct informatii info;
      int local;
      int isConst;
      int arrSize;
      int arr[100];
      int elemente;
} symbolTable[100];

struct func {
    char nume[100];
     char paramTypes[50];
     char retType[20];
     unsigned int nrArgs;
} symbolTableFunctions[100];

void initialize()
{
    for(int i = 0; i < 100; i++)
    {
        bzero(&symbolTable[i].nume, sizeof(symbolTable[i].nume));
        symbolTable[i].info.type = -1;
        symbolTable[i].info.int_val = 0;
        symbolTable[i].info.float_val = 0;
        strcpy(symbolTable[i].info.string_val, "");
        symbolTable[i].info.char_val = '\0';
    }
}

void addInTable(char s[], char tip[])
{
    if(!strcmp(tip, "tip"))
    {
        strcpy(lastTypeUsed, tip);
    }
    else
    {
        if(!strcmp(tip, "variabila"))
        {
            strcpy(symbolTable[varCount].nume, s);
        }
    }
    
}

void eval(struct informatii *inf)
{
	printf("Valoarea este: %d\n", inf->int_val);
}

void Verif(char s[])
{

}