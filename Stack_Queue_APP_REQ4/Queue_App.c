#include "Queue_App.h"
long long evaluate(char* expression)
{
    int i=0;
    int sum=0;
     int sum1=0;
    int total_sum=0;
    int ret_data=0;
    int*p2ret_data=&ret_data;
    ST_queueInfo Queue1;
    ST_queueInfo* Ptr_Queue1=&Queue1;
    createQueue(Ptr_Queue1,100);
    if (checkForBalancedParantheses(expression))
    {
        printf("this Expression can be evaluated\n");
        while (expression[i]!='\0')
        {
            if(expression[i]!='['&&expression[i]!=']'&&expression[i]!='{'&&expression[i]!='}'&&expression[i]!='('&&expression[i]!=')')
             {
                 enqueue(Ptr_Queue1,(expression[i]-48));

             }
             else
             {

             }
             i++;
        }
        dequeue(Ptr_Queue1,p2ret_data);
        while (ret_data>=0&&ret_data<=9)
        {
            sum=sum*10+ret_data;
            dequeue(Ptr_Queue1,p2ret_data);
        }
        printf("\nsum=%d\n",sum);
        while (!(Is_Empty(Ptr_Queue1)))
        {


        switch((ret_data+48))
        {
            case '+':
                {
                    dequeue(Ptr_Queue1,p2ret_data);
                    while (!(Is_Empty(Ptr_Queue1)) &&(ret_data>=0&&ret_data<=9) )
                       {
                           sum1=sum1*10+(ret_data);
                           dequeue(Ptr_Queue1,p2ret_data);

                       }
                       printf("\nsum1   %d   ",sum1);
                       total_sum=sum+sum1;
                       printf("total%d",total_sum);
                       break;

                }
            case '-':
            {
               dequeue(Ptr_Queue1,p2ret_data);
                    while (!(Is_Empty(Ptr_Queue1)) &&(ret_data>=0&&ret_data<=9) )
                       {
                           sum1=sum1*10+(ret_data);
                           dequeue(Ptr_Queue1,p2ret_data);

                       }
                       printf("\nsum1   %d   ",sum1);
                       total_sum=sum+sum1;
                       printf("total%d",total_sum);
                       break;

            }
                case '*':
                {
                    while (!(Is_Empty(Ptr_Queue1)))
                       {
                            dequeue(Ptr_Queue1,p2ret_data);
                            sum1=sum1*10+(ret_data-48);
                            dequeue(Ptr_Queue1,p2ret_data);
                            printf("\nsum1%d",sum1);
                       }
                       total_sum=sum*sum1;
                       printf("total%d",total_sum);
                       break;

                }
                case '/':
                {
                    while (!(Is_Empty(Ptr_Queue1)))
                       {
                            dequeue(Ptr_Queue1,p2ret_data);
                            sum1=sum1*10+(ret_data-48);
                            dequeue(Ptr_Queue1,p2ret_data);
                            printf("\nsum1%d",sum1);
                       }
                       total_sum=sum/sum1;
                       printf("total%d",total_sum);
                       break;

                }




        }


        }
    }



}

