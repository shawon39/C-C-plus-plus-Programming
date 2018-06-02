#include <stdio.h>
int main()
{
    int num,i,position,max=0;

    for(i=1; i<=100; i++)
    {
        scanf("%d",&num);

        if(max<num)
        {
            max=num;
            position = i;
        }
    }
    printf("%d\n%d\n",max,position);
    return 0;
}
