#include <stdio.h>
#include <conio.h>

main()
{
    int score=0;
    int answer;

    printf("Welcome to the C quiz\nThe quiz has 5 very basic questions on the C Programming Language. You get +3 for each correct answer & -1 for each wrong/invalid answer.\n");

    printf(“\nQ1) Why is it called ‘C’ & not ‘D’?\n“);
    printf(“[1]C stands for code\t[2]The inventor’s name started with a C\n[3]It developed after a language called ‘B’\t[4]Why should I care?\n“);
        scanf(“%d“, &answer);

        if(answer==3)
    {
        printf(“That’s Correct!\n“);
            score=score+3;
        }
        else
        {
            printf(“Wrong Answer\n“);
            score=score–1;
        }

    printf(“\nQ) It was developed at?\n“);
    printf(“[1]IBMt[2]Bell Labsn[3]MITt[4]Microsoft(?)\n“);
    scanf(“%d“, &answer);

    if(answer==2)
{
    printf(“That’s Correct!\n“);
        score=score+3;
    }
    else
    {
        printf(“Wrong Answer\n“);
        score=score–1;
    }

    printf(“nQ) Which of these is not a C keyword as per ANSI C ?\n“);
    printf(“[1]externt[2]volatilen[3]entert[4]break\n“);
    scanf(“%d“, &answer);



    if(answer==3)
{
    printf(“That’s Correct!\n“);
        score=score+3;
    }
    else
    {
        printf(“Wrong Answer\n“);
        score=score–1;
    }

    printf(“nQ) What is ANSI, btw? ?\n“);
    printf(“[1]Area of Natural and Scientific Interest\t[2]American National Standards Institute\n[3]American National Standardization Institute\t[4]American National Society Of Intellectuals\n“);
    scanf(“%d“, &answer);

    if(answer==2)
{
    printf(“That’s Correct!\n“);
        score=score+3;
    }
    else
    {
        printf(“Wrong Answer\n“);
        score=score–1;
    }

    printf(“\nQ)Which of these concepts is NOT supported by C ?\n“);
    printf(“[1]Pointers\t[2]Functions\n[3]Strings\t[4]Namespaces\n“);
    scanf(“%d“, &answer);

    if(answer==4)
{
    printf(“That’s Correct!\n“);
        score=score+3;
    }
    else
    {
        printf(“Wrong Answer\n“);
        score=score–1;
    }

    printf(“\nThank You for taking the Quiz.\n Your Total Score is %d out of 15“, score);

    getch();

}
