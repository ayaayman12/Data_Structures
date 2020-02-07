/*
 * Queue.c
 *
 * Created: 2/05/2020 10:48:01 PM
 * Author : A_ayman
 */
 #include"Queue.h"

void createQueue(ST_queueInfo* info, int maxSize)
{
    info->Front=0;
    info->flag=0;
    info->Rear=-1;
    info->Count=0;
    info->Size=maxSize;
    info->Q_ptr=(int*)malloc(info->Size * sizeof(int));
    if (info->Q_ptr!=NULL)
    {
        printf("Queue is created successfully with size of %d\n",info->Size);
    }
    else
    {

    }
}
void enqueue(ST_queueInfo *info, int data)
{
    if (!(Is_Full (info)))
        {

            info->Rear++;

            info->Rear=(info->Rear)%info->Size;

            info->Q_ptr[info->Rear]=data;
           // printf("Element Number %d has been enqueued which equal %d\n\n",info->Rear,info->Q_ptr[info->Rear]);
            info->Count++;

        }
        else
            {
                printf("The Queue is Full\n");
            }

}
void dequeue(ST_queueInfo *info, int* data)
{
    if(!(Is_Empty(info)))
    {
        *data=(info->Q_ptr[info->Front]);
        //data=&(info->Q_ptr[info->Front]);
        //printf("Element Number %d which equal %d has been dequeued\n\n",info->Front,*data);
        info->Front++;
        info->Front=(info->Front)%info->Size;
        info->Count--;


    }
    else
    {
        //printf("Queue Is Empty\n");
    }


}
int Is_Empty (ST_queueInfo *info)
{
    if ((info->Count)==0)
    {
        //printf("the Queue is Empty\n");
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int Is_Full (ST_queueInfo *info)
{
    if ((info->Count)==(info->Size))
    {
        //printf("the Queue is Full\n");
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
