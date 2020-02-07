#include"stack.h"

void createStack(ST_stackInfo *info, int size)
{
    info->ST_size=size;
    info->count=-1;
    info->SP=(int*)malloc(size*sizeof(int));
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
    if (Is_Stack_Empty(info))
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
    if(Is_Stack_Full(info))
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

int Is_Stack_Full(ST_stackInfo *info)
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
int Is_Stack_Empty(ST_stackInfo *info)
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
unsigned char checkForBalancedParantheses(char* expression)
{
    int i=0;
    ST_stackInfo stk1;
    ST_stackInfo* ptr_stk1=&stk1;
    int ret_data=0;
    int PoP_count=-1;
    int Push_count=-1;
    int* ptr_ret_data=&ret_data;
    createStack(ptr_stk1,100);

    while (expression[i]!='\0')
    {
        if(expression[i]=='('||expression[i]=='{'||expression[i]=='[')
        {
            push(ptr_stk1,expression[i]);
            Push_count++;
        }
        else
        {
            if(Push_count==-1)
            {
                printf("Not Balanced..");
                return FALSE;
            }
            pop(ptr_stk1,ptr_ret_data);
            if(*ptr_ret_data=='('&&expression[i]==')')
            {

                PoP_count++;
            }
            if(*ptr_ret_data=='{'&&expression[i]=='}')
            {
                PoP_count++;

            }
            if(*ptr_ret_data=='['&&expression[i]==']')
            {
                PoP_count++;

            }
            else
            {

            }


        }
        i++;

    }
    if(PoP_count==Push_count)
    {
        printf("Balanced..");
        return TRUE;
    }
    else
    {
        printf("Not Balanced..");
        return FALSE;
    }

}

