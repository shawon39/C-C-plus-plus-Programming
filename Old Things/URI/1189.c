#include <stdio.h>

int main()
{
    double array[22][22],sum=0;
    int i,j,k=1;
    char ch;
    scanf("%c",&ch);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&array[i][j]);
        }
    }
    for(i=1; i<11; i++)
    {
        for(j=0; j<k; j++)
        {
            sum = sum + array[i][j];
        }

        if(i>=6)
        {
            k--;
        }
        else
        {
            if(j==5)
            {
                k=k;
            }
            else k++;
        }

    }

    if(ch=='S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/30);
    return 0;
}



