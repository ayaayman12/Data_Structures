#include "std_types.h"
typedef struct
{
    int data;
    struct ST_node* next;
}ST_node;
typedef struct
{
    int Size;
    struct ST_node* head;
}ST_list;


void createList(ST_list *list);
char Is_List_Empty(ST_list *list);
void insertToList(ST_list *list,ST_node *listHead, unsigned char position, int data);
void deleteFromList(ST_node *listHead, unsigned char position, int* data);
ST_node* searchIntoList(ST_node *listHead, int data);
void sortList(ST_node *listHead);	//Bonus
void reverseList(ST_node *listHead);	//Bonus
