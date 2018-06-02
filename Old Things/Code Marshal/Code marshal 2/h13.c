#include <stdio.h>
int main()
{
    int magic=6953, guess=0, i;

    for(i=0; i<10 && guess!=magic; i++)
    {
        printf("\nEnter the guess number...\n");
        scanf("%d",&guess);

        if(guess==magic)
        {
            printf("Right!!\n%d is the magic number\n",magic);
        }
        else
        {
            printf("...Sorry, you are wrong!!...\n");
            if(guess>magic)
            {
                printf("Guess number is so high\n");
            }
            else
            {
                printf("Guess number is so low\n");
            }
        }
    }
    return 0;
}
