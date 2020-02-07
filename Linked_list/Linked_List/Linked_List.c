#include"Linked_List.h"

void createList(ST_list *list)
{
    list->head=NULL;
    list->Size=0;


}
char Is_List_Empty(ST_list *list)
{
    if(list->head==NULL)
    {
        printf("List is Empty\n");
        return TRUE;

    }
    else
    {
        return FALSE;
    }

}
//void destroy_List(ST_list *list)
//{
//    ST_node* temp;
//    while(list->head!=NULL)
//    {
//        temp=list->head->next;
//        free(list->head);
//        list->head=temp;
//    }
//    list->Size=0;
//}
void insertToList(ST_list *list,ST_node *listHead, unsigned char position, int data)
{
    ST_node * New_node;
    ST_node * temp;
    int i=0;
   // if(Is_List_Empty(ST_list *list)
    New_node=(ST_node *)malloc(sizeof(ST_node *));
    if(New_node!=NULL)
    {
        New_node->data=data;
        New_node->next=NULL;
        if(Is_List_Empty(list))
           {
               New_node->next=list->head;
               list->head=New_node;

           }
       else
       {
           for(temp=list->head,i=0;i<position-1;i++)
               {
                   temp=temp->next;
               }
           New_node->next=temp->next;
           temp->next=New_node;
       }
       list->Size++;
    }
    else
    {
        printf("No space to insert a node");
    }


}

void deleteFromList(ST_node *listHead, unsigned char position, int* data)
{
    if(Is_List_Empty(list))
    {
        printf("No Nodes to be deleted");
        break;
    }
    else
    {

    }
}
