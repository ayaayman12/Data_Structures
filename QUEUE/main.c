#include <stdio.h>
#include <stdlib.h>
#include"Queue.h"

int main()
{
    ST_queueInfo queue1;
    int ret_data=0;
    int*ptr_ret_data=&ret_data;
    ST_queueInfo* ptr_queue1;
    ptr_queue1=&queue1;
    createQueue(ptr_queue1,5);
    enqueue(ptr_queue1,11110);
    enqueue(ptr_queue1,1);
    enqueue(ptr_queue1,2);
    enqueue(ptr_queue1,3);
    enqueue(ptr_queue1,4);
    enqueue(ptr_queue1,5);
    enqueue(ptr_queue1,6);

    dequeue(ptr_queue1,ptr_ret_data);
    dequeue(ptr_queue1,ptr_ret_data);
    dequeue(ptr_queue1,ptr_ret_data);
    dequeue(ptr_queue1,ptr_ret_data);
    enqueue(ptr_queue1,5);
       enqueue(ptr_queue1,6);
    dequeue(ptr_queue1,ptr_ret_data);
    dequeue(ptr_queue1,ptr_ret_data);
    dequeue(ptr_queue1,ptr_ret_data);
       enqueue(ptr_queue1,7);


    printf("Hello world!\n");
    return 0;
}
