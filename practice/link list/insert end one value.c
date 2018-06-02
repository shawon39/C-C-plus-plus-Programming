#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head = 10;

void insert()
{
    node *newNode;
    newNode=(node*) malloc(sizeof(node));
    newNode->data=5;
    newNode->next=NULL;
    if(head==10)
    {
        head=newNode;
        printf("%d\n",newNode->data);
    }
}

int main()
{
    insert();
}
