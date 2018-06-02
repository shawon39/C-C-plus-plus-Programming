#include <stdio.h>

void sum(double array[22][22])
{
    int i,j;
    double sum =0;

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&array[i][j]);
        }
    }

    for(i=0; i<11; i++)
    {
        for(j=i+1; j<12; j++)
        {
            sum = sum + array[i][j];
        }
    }
    printf("%.1lf\n",sum);
}

void avg(double array[22][22])
{
    int i,j;
    double sum =0;

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&array[i][j]);
        }
    }

    for(i=0; i<11; i++)
    {
        for(j=i+1; j<12; j++)
        {
            sum = sum + array[i][j];
        }
    }
    printf("%.1lf\n",sum/66);
}

int main()
{

    double array[22][22];
    char ch;
    scanf(" %c",&ch);
    if(ch=='S') sum(array);
    else avg(array);
    return 0;
}


/**
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
*/


