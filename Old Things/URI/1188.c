#include <stdio.h>

int main()
{
    double array[22][22],sum=0;
    int i,j,k=7,m=5;
    char ch;
    scanf("%c",&ch);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&array[i][j]);
        }
    }
    for(i=7; i<12; i++)
    {
        for(j=m; j<k; j++)
        {
            sum = sum + array[i][j];
        }
        k++;
        m--;

    }

    if(ch=='S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/30);
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

