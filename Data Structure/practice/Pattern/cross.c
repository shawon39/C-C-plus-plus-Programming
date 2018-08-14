#include<stdio.h>
int main()
{
    int i,j,n=7,l;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            l=n-i-1;
            if(i==j || j==l)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

