#include"Stack.h"
#include"Queue.h"
#include"Queue_App.h"
int main()
{
//    ST_queueInfo Queue1;
//    ST_queueInfo* Ptr_Queue1=&Queue1;
//    createQueue(Ptr_Queue1,100);
    long long Result=0;
    char * expression="1*(5+){5}0{}[-4]3";

    Result=evaluate(expression);

    printf("\n Result of Expression = %d\n",Result);
    return 0;
}
