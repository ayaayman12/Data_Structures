#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include"std_types.h"
typedef struct
{
    int Front;
    int Rear;
    int Size;
    int Count;
    int* Q_ptr;
    int flag;

}ST_queueInfo;
void createQueue(ST_queueInfo* info, int maxSize);
void enqueue(ST_queueInfo *info, int data);
void dequeue(ST_queueInfo *info, int* data);



#endif // QUEUE_H_INCLUDED
