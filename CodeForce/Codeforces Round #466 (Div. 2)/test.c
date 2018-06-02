#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;

};

typedef struct Node node;

node *newnode, *head;
int totalvalue, MaxValue;
int MinValue;


void FindLargesetNumber()
{

    node *temp =head;

    MaxValue = head->data;

    while(temp!= NULL)
    {
        if(temp->data>MaxValue)
        {
            MaxValue = temp->data;
        }
         temp=temp->next;

    }

    printf("Max value is: %d\n", MaxValue);
}


void FindsmallestNumber()
{

    node *temp =head;

    MinValue = head->data;

    while(temp!= NULL)
    {
        if(temp->data < MinValue)
        {
            MinValue = temp->data;
        }
        temp=temp->next;

    }

    printf("Min value is: %d\n", MinValue);
}


 void insert_infront(int value)
{

    if(head == NULL)
    {
        //    print("HI");
        newnode=(node*)malloc(sizeof(node));
        newnode->data=value;
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        newnode=(node*)malloc(sizeof(node));
        newnode->data=value;
        newnode->next = NULL;
        newnode->next=head;
        head=newnode;
    }
}

void print()
{
    node *temp;
    temp = head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    printf("\n");
}

int main()
{
    head = NULL;
    int i,n,value;

    insert_infront(10);
    insert_infront(20);
    insert_infront(30);
    insert_infront(40);
    insert_infront(50);
    print();

    //printf("Input a value to search: \n");
    //scanf("%d", &value);

   // DeletebyValue(value);

    //print();

    //Sum();

    FindLargesetNumber();
    FindsmallestNumber();

    return 0;
}
