#include "Queue_App.h"
long long evaluate(char* expression)
{
    int i=0;
    int sum=0;
     int sum1=0;
    int total_sum=0;
    int ret_data=0;
    int count=0;
    int count_op=0;
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
        count++;
        printf("\n Operand number %d = %d\n",count,sum);
        count++;
        total_sum=sum;
        while (!(Is_Empty(Ptr_Queue1)))
        {

            sum1=0;


            count_op++;
            printf("\n Operation number %d = %c\n",count_op,(ret_data+48));



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
                       if((Is_Empty(Ptr_Queue1)))
                       {
                           sum1=sum1*10+(ret_data);
                       }

                      printf("\n Operand number %d = %d\n",count,sum1);
                      count++;
                      total_sum=total_sum+sum1;
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
                if((Is_Empty(Ptr_Queue1)))
                   {
                       sum1=sum1*10+(ret_data);
                   }
                printf("\n Operand number %d = %d\n",count,sum1);
                total_sum=total_sum-sum1;

                count++;
                break;

            }
            case '*':
            {
                dequeue(Ptr_Queue1,p2ret_data);
                while (!(Is_Empty(Ptr_Queue1)) &&(ret_data>=0&&ret_data<=9) )
                   {
                       sum1=sum1*10+(ret_data);
                       dequeue(Ptr_Queue1,p2ret_data);

                   }
                if((Is_Empty(Ptr_Queue1)))
                   {
                       sum1=sum1*10+(ret_data);
                   }
                printf("\n Operand number %d = %d\n",count,sum1);
                total_sum=total_sum*sum1;

                count++;
                break;

            }
                case '/':
                {
                    dequeue(Ptr_Queue1,p2ret_data);
                    while (!(Is_Empty(Ptr_Queue1)) &&(ret_data>=0&&ret_data<=9) )
                       {
                           sum1=sum1*10+(ret_data);
                           dequeue(Ptr_Queue1,p2ret_data);

                       }
                    if((Is_Empty(Ptr_Queue1)))
                       {
                           sum1=sum1*10+(ret_data);
                       }
                    printf("\n Operand number %d = %d\n",count,sum1);
                    total_sum=total_sum/sum1;

                    count++;
                    break;

                }

        }


        }
    }

   // printf("\n \nEvaluation =%d\n\n",total_sum);

return total_sum;

}

