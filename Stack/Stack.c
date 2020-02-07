#include"stack.h"

void createStack(ST_stackInfo *info, int size)
{
    info->ST_size=size;
    info->count=-1;
    info->SP=(char*)malloc(size*sizeof(int));
    if(info->SP!=NULL)
    {
        printf("stack is created successfully with size of %d\n",info->ST_size);
    }
    else
    {
        printf("stack is not created successfully");
    }
}
void pop(ST_stackInfo *info, int* data)
{
    if (Is_Empty(info))
    {
        printf("Stack is empty, No element to POP\n");
    }
    else

    {
       *data= info->SP[info->count];
       printf("%d\n",*data);
       printf("new element has been popped from stack %d \n, stack now contain %d element\n",(info->SP[info->count]),info->count+1);
       info->count--;

    }

}
void push(ST_stackInfo *info, int data)
{
    if(Is_Full(info))
    {
        printf("Stack is full\n");
    }
    else
    {
        info->count++;
        info->SP[info->count]=data;
        printf("new element has been pushed to stack %d \n, stack now contain %d element\n",(info->SP[info->count]),info->count+1);
    }

}

int Is_Full(ST_stackInfo *info)
{
    if(info->SP[info->count]==info->SP[info->ST_size-1])
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int Is_Empty(ST_stackInfo *info)
{
    if(info->SP[info->count]==-1)
    {
       // printf("the stack is empty\n");
        return TRUE;

    }
    else
    {
        return FALSE;
    }
}

