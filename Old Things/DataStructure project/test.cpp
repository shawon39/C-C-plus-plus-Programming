
// textcolor();
//  textbackground();

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct voter
{
    char name[15];
    char id[15];
} node;
node info[15];

void login();
void finger_print();
void voting_process();
void result();

int d=0,i,count5=0,President_Candidate1=0,President_Candidate2=0,President_null=0,Secretary_Candidate1=0,Secretary_Candidate2=0,Secretary_null=0;

int main()
{
    textcolor();

    printf("\n\n\n\n ===================================================================!!    WELCOME TO HERE    !!========================================================================\n\n");
    system("COLOR 72");
    char id[15];
    int j,t;
    printf("\n\n");
    login();
    strcpy(info[0].name,"Aa");
    strcpy(info[0].id,"1001");
    strcpy(info[1].name,"Bb");
    strcpy(info[1].id,"1002");
    strcpy(info[2].name,"Cc");
    strcpy(info[2].id,"1003");
    strcpy(info[3].name,"Dd");
    strcpy(info[3].id,"1004");
    strcpy(info[4].name,"Ee");
    strcpy(info[4].id,"1005");
    strcpy(info[5].name,"Ff");
    strcpy(info[5].id,"1006");
    strcpy(info[6].name,"Gg");
    strcpy(info[6].id,"1007");
    strcpy(info[7].name,"Hh");
    strcpy(info[7].id,"1008");
    strcpy(info[8].name,"Ii");
    strcpy(info[8].id,"1009");
    strcpy(info[9].name,"Jj");
    strcpy(info[9].id,"1010");
    strcpy(info[10].name,"Kk");
    strcpy(info[10].id,"1011");
    strcpy(info[11].name,"Ll");
    strcpy(info[11].id,"1012");
    strcpy(info[12].name,"Mm");
    strcpy(info[12].id,"1013");
    strcpy(info[13].name,"Nn");
    strcpy(info[13].id,"1014");
    strcpy(info[14].name,"Oo");
    strcpy(info[14].id,"1015");

    for(i=0; i<15; i++)
    {
        if(d==1)
        {
            return 0;
        }
        printf("\n      Enter Your National Id Number: ");
        scanf("%s",id);
        for(j=0; j<3; j++)
        {
            t=0;
            while(strcmp(id,info[t].id)!=0 && t<15)
            {
                t++;
            }
            if(strcmp(id,info[t].id)==0)
            {
                strcpy(info[t].id,"voted");
                finger_print();
                break;
            }
            else
            {
                printf("\n      Your Id is Incorrect. please try again!!\n");
                printf("\n      Enter Your Id Again: ");
                scanf("%s",id);
            }
        }
    }
    return 0;
}

void login()
{
    char username[15],password[15];
    char user_name[]="admin";
    char pass_word[]="admin123";
    printf("\n                                                                      Username: ");
    gets(username);
    printf("\n                                                                      Password: ");
    gets(password);
    while(strcmp(user_name,username)!=0 || strcmp(pass_word,password)!=0 )
    {
        printf("\n                                                     Your username or password is incorrect. Try Again please!\n");
        printf("\n                                                                      Username: ");
        gets(username);
        printf("\n                                                                      Password: ");
        gets(password);
    }
    printf("\n                                                                      Your Login successful !!\n\n");
    printf("\n ======================================================================================================================================================================\n\n");
}

void finger_print()
{
    char finger[10];
    int count=0;
    printf("\n      National ID Matched !!\n");
    printf("\n      Fingerprint match: ");
    scanf("%s",finger);
    while(count!=3)
    {
        if(strcmp(finger,"yes")!=0)
        {
            printf("\n      Fingerprint not match. Try again: ");
            scanf("%s",finger);
        }
        else
        {
            printf("\n      Fingerprint matched !!! \n");
            printf("\n ======================================================================================================================================================================\n");
            voting_process();
            break;
        }
        count++;
    }
}

void voting_process()
{
    int a,b;
    printf("\n                                                    President                               Secretary\n");
    printf("\n                                               -------------------                     -------------------\n");
    printf("\n                                                  1.Candidate 1                            1.Candidate 1\n");
    printf("\n                                                  2.Candidate 2                            2.Candidate 2\n");
    printf("\n                                                  3.Null Vote!                             3.Null Vote! \n");

    printf("\n ======================================================================================================================================================================\n\n");
    printf("\n      1.Candidate 1\n\n      2.Candidate 2\n\n      3.Null Vote!\n");
    printf("\n      Enter Your vote for president: ");
    scanf("%d",&a);
    if(a==1) President_Candidate1++;
    else if(a==2) President_Candidate2++;
    else President_null++;
    printf("\n      --------------------------------------------------------------\n");
    printf("\n      1.Candidate 1\n\n      2.Candidate 2\n\n      3.Null Vote! \n");
    printf("\n      Enter Your vote for Secretary: ");
    scanf("%d",&b);
    if(b==1) Secretary_Candidate1++;
    else if(b==2) Secretary_Candidate2++;
    else Secretary_null++;
    printf("\n\n      Your vote Done Successfully!! Thank You for your valuable vote!!\n");

    printf("\n ======================================================================================================================================================================\n");
    printf("\n\n                                                                          Time Over: ?? : ");
    result();
}

void result()
{
    char ch1[100],ch2[100],cha='%';
    scanf("%s",ch2);
    printf("\n ======================================================================================================================================================================\n");
    strcpy(ch1,"yes");
    count5++;
    if(strcmp(ch1,ch2)==0)
    {
        d=1;
        printf("\n\n                                                                          Time Finished !! ");
        printf("\n\n                                                                          Voting Result !!");
        printf("\n\n ======================================================================================================================================================================\n");
        printf("\n      President Candidate 1 got: %d votes !!\n",President_Candidate1);
        printf("\n      President Candidate 2 got: %d votes !!\n",President_Candidate2);
        printf("\n      Null vote (President): %d votes !!\n",President_null);
        printf("\n ----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
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
        printf("\n ----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        printf("\n      President Candidate1 1 got: %.2lf %c votes!!\n",President_Candidate11,cha);
        printf("\n      President Candidate 2 got: %.2lf %c votes!!\n",President_Candidate22,cha);
        printf("\n      Null vote (President): %.2lf %c vote!!\n",President_null1,cha);
        printf("\n ----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n      Secretary Candidate11: %.2lf %c votes!!\n",Secretary_Candidate11,cha);
        printf("\n      Secretary Candidate22: %.2lf %c votes!!\n",Secretary_Candidate22,cha);
        printf("\n      Null vote(Secretary): %.2lf %c votes!!\n",Secretary_null1,cha);
        printf("\n ======================================================================================================================================================================\n\n");

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
        printf("\n\n ======================================================================================================================================================================\n");
        printf("\n\n                                    !!  ----------------------   THANK YOU ALL     ---------------------- !!\n\n");
        printf("\n\n ======================================================================================================================================================================\n\n\n\n\n\n");
    }
}
