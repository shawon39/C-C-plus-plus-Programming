#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;

void insert(node *list, int data)
{
    node *temp;
    temp = (node *) malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    while(list->next!=NULL)
        list=list->next;
    list->next=temp;
    printf("%d insert!\n",data);
}

int sum(node *list)
{
    int s=0;
    while(list!=NULL)
    {
        s+=list->data;
        list=list->next;
    }
    return s;
}

void print(node *list)
{
    if(list!=NULL)
    {
        printf("%d  ",list->data);
        print(list->next);
    }
}

int main()
{
    node *list;
    list=(node *) malloc(sizeof(node));
    list->next=NULL;
    insert(list,10);
    insert(list,12);
    insert(list,15);
    print(list->next);
    printf("\n\nSum = %d!\n",sum(list->next));
    return 0;
}






