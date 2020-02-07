#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include"std_types.h"

typedef struct
{
    int ST_size;
    int* SP;
    int count;
}ST_stackInfo;
void createStack(ST_stackInfo *info, int size);
void push(ST_stackInfo *info, int data);
void pop(ST_stackInfo *info, int* data);
int Is_Stack_Full(ST_stackInfo *info);
int Is_Stack_Empty(ST_stackInfo *info);
unsigned char checkForBalancedParantheses(char* expression);
#endif // STACK_H_INCLUDED
