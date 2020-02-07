#include"stack.h"
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
        else if(expression[i]==')'||expression[i]=='}'||expression[i]==']')
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
        else
        {

        }
        i++;

    }
    if(PoP_count==Push_count)
    {
        printf("Balanced..");
    }
    else
    {
        printf("Not Balanced..");
    }

}
