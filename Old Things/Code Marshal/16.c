#include <stdio.h>
int main()
{
    int i;
    char ch,x;

    x='0';
    for(i=0; i<=5; i++)
    {
        scanf(" %c",&ch);

        if(ch > x)
        {
            x = ch;
        }
    }
    printf("biggest character is %c\n",x);
    return 0;
}

#include <stdio.h>
int main()
{
    int i;
    char ch,x;

    x='0';
    for(i=0; i<=5; i++)
    {
        scanf(" %c",&ch);

        if(ch < x)
        {
            x = ch;
        }
    }
    printf("smallest character is %c\n",x);
    return 0;
}
