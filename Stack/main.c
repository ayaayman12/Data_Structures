#include "stack.h"
#include"Stack_REQ2.c"

int main()
{
//    ST_stackInfo stk1;
//    int ret_data;
//    int* ptr_ret_data=&ret_data;
//    ST_stackInfo* ptr_stk1=&stk1;
//    createStack(ptr_stk1,10);
//    pop(ptr_stk1,ptr_ret_data);
//    push(ptr_stk1,8);
//    pop(ptr_stk1,ptr_ret_data);
    char string[10]="({]}";
    //char* ptr_string=string;

    checkForBalancedParantheses(string);

//    pop(ptr_stk1,ptr_ret_data);
//    Is_Empty(ptr_stk1);
//    push(ptr_stk1,5);
//    pop(ptr_stk1,ptr_ret_data);
//    Is_Empty(ptr_stk1);

    //printf("%d\n",stk1.ST_size);
    return 0;
}
