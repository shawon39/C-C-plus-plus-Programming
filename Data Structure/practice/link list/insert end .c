#include<stdio.h>
//#include<stdlib.h>

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

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        node *current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newNode;
    }
}
void print()
{
    node* current=head;
    printf("New List is: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
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
