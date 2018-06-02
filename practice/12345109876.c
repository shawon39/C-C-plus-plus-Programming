#include <stdio.h>
int main()
{
    int i,a=1;
    for(i=a; i<=10; i++)
    {
        if(i<6) printf("%d ",i);

        if(i==5)
        {
            a=10;
        }

        if(i>=6)
        {
            printf("%d ",a--);
        }
    }
    return 0;
}

