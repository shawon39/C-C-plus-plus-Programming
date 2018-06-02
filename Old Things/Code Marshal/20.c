#include <stdio.h>
int main()
{
    int i,x,y;

    for(i=1; i<6; i++)
    {
        printf("What is %d + %d??\n",i,i);
        scanf("%d",&x);

        if(x==i+i)
        {
            printf("This is Right\n");
            continue;
        }
        else
        {
            printf("Sorry!! you are wrong\nTry again!\n");
        }
        printf("\nWhat is %d + %d??\n",i,i);
        scanf("%d",&y);

        if(y==i+i)
        {
            printf("You Right!!\n");
        }
        else
        {
            printf("Sorry!! You are wrong!!\nRight Ans is %d",i+i);
        }
    }
}
