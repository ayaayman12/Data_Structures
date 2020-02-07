#include"Stack.h"
#include"Queue.h"
#include"Queue_App.h"
int main()
{
//    ST_queueInfo Queue1;
//    ST_queueInfo* Ptr_Queue1=&Queue1;
//    createQueue(Ptr_Queue1,100);
    char * expression="12+5-11{}[]";

    evaluate(expression);

    printf("Hello world!\n");
    return 0;
}
