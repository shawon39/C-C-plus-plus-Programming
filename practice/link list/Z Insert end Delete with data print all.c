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

void del(node *list,int data)
{
    node *temp;
    while((list->next)->data!=data)
        list=list->next;
    temp=list->next;
    list->next=temp->next;
    free(temp);
    printf("\n\n%d Deleted!\n",data);
}

void upd(node *list,int data1,int data2)
{
    while(list->data!=data1)
        list=list->next;
    list->data=data2;
    printf("\n\n%d updated!\n",data1);
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
    printf("\n");
    print(list->next);
    upd(list,12,24);
    print(list->next);
    printf("\n");
    return 0;
}






