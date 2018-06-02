#include <stdio.h>
int main()
{
    int a,b,i,z;
    scanf("%d%d",&a,&z);
    for(i=a; i<=z; i++)
    {
        printf("What is %d + %d??\n",i,i);
        scanf("%d",&b);

        if(b==i+i)
        {
            printf("This is Right!\n");
        }
        else
        {
            printf("sorry! You are wrong!\n");
            printf("The right answer is %d\n",i+i);
        }
    }
    return 0;

}
