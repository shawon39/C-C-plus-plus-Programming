#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node* head=NULL;

void insert(int data)
{
    node* newNode;
    newNode=(node*)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;

    //newNode->next=head;
    //head=newNode;
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
}
void print()
{
    node* newNode;
    printf("New List is: ");
    while(newNode!=NULL)
    {
        printf("%d ",newNode->data);
        newNode=newNode->next;
    }
    printf("\n");

}

int main()
{
    int i,num,n;
    scanf("%d",&num);
    for(i=0; i<num; i++)
    {
        printf("Enter The Number: ");
        scanf("%d",&n);
        insert(n);
        print();
        printf("\n");
    }
    return 0;
}
