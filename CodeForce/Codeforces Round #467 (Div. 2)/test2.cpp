#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}node;
node*head;
void print ()
{
    node*current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
}


int main ()
{
    head=NULL;
    head=(node*)malloc(sizeof(node));
    head->data=2;
    head->next=(node*)malloc(sizeof(node));
    head->next->data=5;
    head->next->next=NULL;
    print();
    return 0;
}
