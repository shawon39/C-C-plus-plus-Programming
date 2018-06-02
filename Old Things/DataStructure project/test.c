/** Prepared By.....

 Shakhawat Hossain (161-15-6953)
 Md. Deloar Hossain (161-15-6750)
 Ruhullah Bin Kalim (161-15-7092)
 Md. Kamrul Hasan (161-15-6817)
 Md. Sahadatunnobi Chowdhury (161-15-7581)

 Department of CSE !! Section: A !

 Prepared For.....
 Sayed Akther Hossain
 Head Of CSE Department ! */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 20

typedef struct Node
{
    char id[size];
    struct Node *next;
} node;
node *head=NULL;

void login();
void finger_print();
void voting_process();
void result();
void voter_id();
void del();

int p=0,d=0,i,count5=0,President_Candidate1=0,President_Candidate2=0,President_null=0,Secretary_Candidate1=0,Secretary_Candidate2=0,Secretary_null=0;

int main()
{
    system("COLOR 30");
    printf("\n\n\n ============================!!    WELCOME TO HERE    !!================================\n\n");

    int j,t;
    char id[size],id1[size];
    //login();

    for(j=0; j<5; j++)
    {
        printf("\n      voter National ID: ");
        scanf("%s",id);
        voter_id(id);
    }
    printf("\n ===========================================================================================\n\n");
    for(i=0; i<5; i++)
    {
        if(d==1) return 0;
        printf("\n  Enter Your National ID: ");
        scanf("%s",id1);
        for(j=0; j<3; j++)
        {
            node *current=head;

            if(strcmp(current->id,id1)==0)
            {
                del(id1);
                finger_print();
                break;
            }
            else
            {
                node *current=head;

                t=0;
                while(current->next!=NULL && t<5)
                {
                    current=current->next;
                    if(strcmp(current->id,id1)==0)
                    {
                        finger_print();
                        break;
                    }
                    t++;
                }
                if(strcmp(current->id,id1)==0)
                {
                    del(id1);
                    break;
                }
                else
                {

                    printf("\n  Your Id is Incorrect. please try again!!\n");
                    printf("\n  Enter Your Id Again: ");
                    scanf("%s",id1);
                }

            }

        }
    }

    return 0;
}

void login()
{
    char username[size],password[size];
    char user_name[]="admin";
    char pass_word[]="admin123";
    printf("\n                              Username: ");
    gets(username);
    printf("\n                              Password: ");
    gets(password);
    while(strcmp(user_name,username)!=0 || strcmp(pass_word,password)!=0 )
    {
        printf("\n               Your username or password is incorrect. Try Again please!\n");
        printf("\n                              Username: ");
        gets(username);
        printf("\n                              Password: ");
        gets(password);
    }
    printf("\n                              Your Login successful !!\n\n");
    printf("\n ===========================================================================================\n\n");
}

void voter_id(char *id)
{
    node* newNode=(node*)malloc(sizeof(node));
    strcpy(newNode->id,id);
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

void finger_print()
{
    char finger[size];
    int count=0;
    printf("\n  National ID Matched !!\n");
    printf("\n  Fingerprint match: ");
    scanf("%s",finger);
    while(count!=3)
    {
        if(strcmp(finger,"yes")!=0)
        {
            printf("\n  Fingerprint not match. Try again: ");
            scanf("%s",finger);
        }
        else
        {
            printf("\n  Fingerprint matched !!! \n");
            printf("\n ==============================================================================================================\n");
            voting_process();
            break;
        }
        count++;
    }
}
void del(char *n)
{

    node* current=head;
    node* previous;

    if(strcmp(head->id,n)==0)
    {
        head=head->next;
        free(current);
    }
    else
    {
        while(current->next!=NULL && current->id!=n)
        {
            previous=current;
            current=current->next;
        }
        if(strcmp(current->id,n)==0)
        {
            previous->next=current->next;
            free(current);
        }
    }
}
void voting_process()
{
    int a,b;
    if(p==0)
    {
        printf("\n                                                    President                               Secretary\n");
        printf("\n                                               -------------------                     -------------------\n");
        printf("\n                                                  1.Candidate 1                            1.Candidate 1\n");
        printf("\n                                                  2.Candidate 2                            2.Candidate 2\n");
        printf("\n                                                  3.Null Vote!                             3.Null Vote! \n");
        p++;
        printf("\n ===========================================================================================\n\n");
    }

    printf("\n  1.Candidate 1\n\n  2.Candidate 2\n\n  3.Null Vote!\n");
    printf("\n      Enter Your vote for president: ");
    scanf("%d",&a);
    if(a==1) President_Candidate1++;
    else if(a==2) President_Candidate2++;
    else President_null++;
    printf("\n  ----------------------------------------------------------------------------------------\n");
    printf("\n  1.Candidate 1\n\n  2.Candidate 2\n\n  3.Null Vote! \n");
    printf("\n  Enter Your vote for Secretary: ");
    scanf("%d",&b);
    if(b==1) Secretary_Candidate1++;
    else if(b==2) Secretary_Candidate2++;
    else Secretary_null++;
    printf("\n\n      Your vote Done Successfully!! Thank You for your valuable vote!!\n");

    printf("\n ===========================================================================================\n\n");
    printf("\n\n                             Time Over: ?? : ");
    result();
}

void result()
{
    char ch1[size],ch2[size],cha='%';
    scanf("%s",ch2);
    printf("\n ===========================================================================================\n\n");
    strcpy(ch1,"yes");
    count5++;
    if(strcmp(ch1,ch2)==0)
    {
        d=1;
        printf("\n\n                                                                          Time Finished !! ");
        printf("\n\n                                                                          Voting Result !!");
        printf("\n ===========================================================================================\n\n");
        printf("\n      President Candidate 1 got: %d votes !!\n",President_Candidate1);
        printf("\n      President Candidate 2 got: %d votes !!\n",President_Candidate2);
        printf("\n      Null vote (President): %d votes !!\n",President_null);
        printf("\n ---------------------------------------------------------------------------------------------\n");
        printf("\n      Secretary Candidate 1 got: %d votes !!\n",Secretary_Candidate1);
        printf("\n      Secretary Candidate 2 got: %d votes !!\n",Secretary_Candidate2);
        printf("\n      Null Vote (Secretary): %d votes !!\n",Secretary_null);

        double President_Candidate11,President_Candidate22,Secretary_Candidate11,Secretary_Candidate22,President_null1,Secretary_null1;

        President_Candidate1=(double)President_Candidate1;
        President_Candidate2=(double)President_Candidate2;
        President_null=(double)President_null;
        Secretary_Candidate1=(double)Secretary_Candidate1;
        Secretary_Candidate2=(double)Secretary_Candidate2;
        Secretary_null=(double)Secretary_null;

        President_Candidate11=(100*President_Candidate1)/(double)count5;
        President_Candidate22=(100*President_Candidate2)/(double)count5;
        President_null1=(100*President_null)/(double)count5;

        Secretary_Candidate11=(100*Secretary_Candidate1)/(double)count5;
        Secretary_Candidate22=(100*Secretary_Candidate2)/(double)count5;
        Secretary_null1=(100*Secretary_null)/(double)count5;
        printf("\n ---------------------------------------------------------------------------------------------\n");

        printf("\n      President Candidate1 1 got: %.2lf %c votes!!\n",President_Candidate11,cha);
        printf("\n      President Candidate 2 got: %.2lf %c votes!!\n",President_Candidate22,cha);
        printf("\n      Null vote (President): %.2lf %c vote!!\n",President_null1,cha);
        printf("\n ---------------------------------------------------------------------------------------------\n");
        printf("\n      Secretary Candidate11: %.2lf %c votes!!\n",Secretary_Candidate11,cha);
        printf("\n      Secretary Candidate22: %.2lf %c votes!!\n",Secretary_Candidate22,cha);
        printf("\n      Null vote(Secretary): %.2lf %c votes!!\n",Secretary_null1,cha);
        printf("\n ===========================================================================================\n\n");
        if(President_null>=President_Candidate1 && President_null>=President_Candidate2)
        {
            printf("\n                          President: Whereas Null Vote Is Grater than Or Equal candidates votes So Vote will be Again!!\n");
        }
        else if(President_Candidate1 > President_Candidate2)
        {
            printf("\n                                                   President:  Candidate 1  Won !!\n");
        }
        else if(President_Candidate1 < President_Candidate2)
        {
            printf("\n                                                   President:  Candidate 2  Won !!\n");
        }
        else if(President_Candidate1==0 && President_Candidate2==0)
        {
            printf("\n                          President: Whereas Null Vote Is Grater than Or Equal candidates votes So Vote will be Again!!\n");
        }
        else if(President_Candidate1 == President_Candidate2)
        {
            printf("\n                                        President:- Vote Is Equal! Vote Tied!! No One is winner !!\n");
        }
        else
        {
            printf("\n                          President: Whereas Null Vote Is Grater than Or Equal candidates votes So Vote will be Again!!\n");
        }

        if(Secretary_null>=Secretary_Candidate1 && Secretary_null>=Secretary_Candidate2)
        {
            printf("\n                          Secretary: Whereas Null Vote Is Grater than Or Equal candidates votes So Vote will be Again!!\n");
        }
        else if(Secretary_Candidate1 > Secretary_Candidate2)
        {
            printf("\n                                                   Secretary: Candidate 1 won !!\n");
        }
        else if(Secretary_Candidate1 < Secretary_Candidate2)
        {
            printf("\n                                                   Secretary: Candidate 2 won !!\n");
        }
        else if(Secretary_Candidate1==0 && Secretary_Candidate2==0)
        {
            printf("\n                          Secretary: Whereas Null Vote Is Grater than Or Equal candidates votes So Vote will be Again!!\n");
        }
        else if(Secretary_Candidate1 == Secretary_Candidate2)
        {
            printf("\n                                       Secretary: Vote Is Equal! Vote Tied!! No One is winner !!\n");
        }
        else
        {
            printf("\n                          Secretary: Whereas Null Vote Is Grater than Or Equal candidates votes So Vote will be Again!!\n");
        }
        printf("\n ===========================================================================================\n\n");
        printf("\n\n     !!  ----------------------   THANK YOU ALL     ---------------------- !!\n\n");
        printf("\n ===========================================================================================\n\n");
    }
}
