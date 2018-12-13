#include<stdio.h>
int main()
{
    int i,j,n;
    while(1)
    {
    scanf("%d",&n);
    if (n == 0)break;
    int array[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            array[i][j]=1;
        }

    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

        {
            if(j==0)
             printf("%3d",array[i][j]);
        else if(j>0 && j<n)
            printf("%4d",array[i][j]);
        }
printf("\n");
    }
    }
    return 0;
}
