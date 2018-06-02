/*#include <stdio.h>
int main()
{
    int i,j;

    for(i=1; i<=9; i+=2)
    {
        if(i==1)
        {
            for(j=7; j>=5; j--)
            {
                printf("I=%d J=%d\n",i,j);
            }
        }
        else if(i==3)
        {
            for(j=9; j>=7; j--)
            {
                printf("I=%d J=%d\n",i,j);
            }
        }
        else if(i==5)
        {
            for(j=11; j>=9; j--)
            {
                printf("I=%d J=%d\n",i,j);
            }
        }
        else if(i==7)
        {
            for(j=13; j>=11; j--)
            {
                printf("I=%d J=%d\n",i,j);
            }
        }
        else if(i==9)
        {
            for(j=15; j>=13; j--)
            {
                printf("I=%d J=%d\n",i,j);
            }
        }
    }
    return 0;
}*/


#include <stdio.h>
int main()
{
    int i=1,j=7;

    for(i=1; i<=9; i+=2)
    {
        printf("I=%d J=%d\n",i,j--);
        printf("I=%d J=%d\n",i,j--);
        printf("I=%d J=%d\n",i,j--);
        j+=5;
    }
    return 0;
}
















