#include<stdio.h>
#include<string.h>
struct node
{
    char name[15], num[20];
    struct node *next;

}*head,*node,*temp,*p,*q;

int main()
{
    first();
    while(1)
    {
        int i;
        display();
        scanf("%d",&i);
        if(i==1)
            vcon();
        else if(i==2)
            scon();
        else if(i==3)
            acon();
        else if(i==4)
            dcon();
        else if(i==5)
            econ();
        else if(i==6)
            break;
        else
            printf("Sorry something wrong");
    }
    return 0;
}
void first()
{
    printf("You must add one contact number for the first time.");
    head=(struct node *)malloc(sizeof(struct node));
    node=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the contact name:");
    scanf("%s", &node->name);
    printf("\nenter the contact number:");
    scanf("%s", &node->num);
    node->next=NULL;
    head=node;

}
void display()
{

    printf("\n========================\n\tMAIN MENU\n========================");
    printf("\n1. View all Contacts\n2. Search contact\n3. Add New Contact\n4. Delete contact\n5. Edit contact\n6. Exit\n");
    printf("========================\nEnter the choice:");



}
void vcon()
{
    temp=head;
    printf("\n\n\t\t====================\n\t\t  List of contacts\n\t\t====================\n");
    printf("Name\t\t\tPhone No\n");
    printf("==================================================\n");
    while(temp!=NULL)
    {
        printf("Name      :%s\nPhone no  :%s\n\n",temp->name,temp->num);
        temp=temp->next;
    }
    printf("==================================================\n");
}

void scon()
{
    int i=1;
    char con[15];
    printf("Enter the Name or Number :");
    scanf("%s",&con);
    temp=head;
    while(temp!=NULL)
    {
        if((strcmp(con, temp->name)==0) || (strcmp(con, temp->num)==0))
        {
            printf("\nName      :%s\nPhone no  :%s\n\n",temp->name,temp->num);
            i++;
            break;
        }
        temp=temp->next;
    }
    if(i==1)
        printf("Sorry not found this contact");

}
void acon()
{


    temp=head;
    while(temp!=NULL)
    {
        p=temp;  /// previous = current
        temp=temp->next; ///current= current->next

    }
    node=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the contact name:");
    scanf("%s", &node->name);
    printf("\nenter the contact number:");
    scanf("%s", &node->num);
    p->next=node;
    node->next=NULL;

}


void dcon()
{

    int i=1;
    char con[15];
    printf("Enter delete contact name or phone number :");
    scanf("%s",&con);
    temp=head;
    while(temp!=NULL)
    {
        if((strcmp(con, temp->name)==0) || (strcmp(con, temp->num)==0))
        {
            q=p->next->next;
            p->next=q;
            free(temp);
            i++;
            break;
        }
        p=temp;
        temp=temp->next;
    }
    if(i==1)
        printf("Sorry not found this contact");
}




void econ()
{
    int i=1;
    char con[15];
    printf("Enter edit contact name or phone number :");
    scanf("%s",&con);
    temp=head;
    while(temp!=NULL)
    {

        if((strcmp(con, temp->name)==0) || (strcmp(con, temp->num)==0))
        {
            node=(struct node *)malloc(sizeof(struct node));
            printf("\nenter the contact new name:");
            scanf("%s", &node->name);
            printf("\nenter the contact new number:");
            scanf("%s", &node->num);
            p->next=node;
            node->next=temp->next;
            i++;
            break;
        }
        p=temp;
        temp=temp->next;
    }
    if(i==1)
        printf("Sorry not found this contact");
}

