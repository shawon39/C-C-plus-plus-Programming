#include <stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number>=0)
    {
        printf("%d\n",number);
    }
    else
    {
        printf("%d\nNegative\n",number);
    }
    return 0;
}
