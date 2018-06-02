#include <stdio.h>

int main()
{
    double array[22][22],sum=0;
    int i,j;
    char ch;
    scanf("%c",&ch);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&array[i][j]);
        }
    }

    for(i=1; i<12; i++)
    {
        for(j=0; j<i; j++)
        {
            sum = sum + array[i][j];
        }
    }

    if(ch=='S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/66);
    return 0;
}




