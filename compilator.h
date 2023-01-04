#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

char buff[100];
int fd, fd1;
struct informatii{
      int int_val;
      char string_val[500];
      float float_val;
      char char_val;
      int type;
};

struct param{
      char nume[100];
      struct informatii info;
}symbolTable[100];

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

void eval(struct informatii *inf)
{
	printf("Valoarea este: %d\n", inf->int_val);
}