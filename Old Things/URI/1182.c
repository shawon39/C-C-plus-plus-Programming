#include <stdio.h>

void sum(int n, double array[22][22])
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

    for(i=0; i<12; i++)
    {
        for(j=n;j!=n+1;j++)
        {
            sum = sum + array[i][j];
        }
    }
    printf("%.1lf\n",sum);
}

void avg(int n, double array[22][22])
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

    for(i=0; i<12; i++)
    {
        for(j=n;j!=n+1;j++)
        {
            sum = sum + array[i][j];
        }
    }
    printf("%.1lf\n",sum/12);
}

int main()
{

    double array[22][22];
    int n;
    char ch;
    scanf("%d %c",&n,&ch);
    if(ch=='S') sum(n,array);
    else avg(n,array);
    return 0;
}


/**
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
*/

