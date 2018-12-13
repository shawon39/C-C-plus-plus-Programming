#include<stdio.h>
int main()
{
    int i,j,n=0,m=0,sum=0,sum1=0,sum2=0,sum3=0,sum4=0,t2,t3,t4,t5=0;
    int array[100][100];
    //int array[4][5]= {{11,12,13,14},{21,22,23,24},{31,32,33,34},{41,42,43,44}};
scanf("%d %d",&n,&m);
  for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&array[i][j]);

        }
    }
    printf("\n");

    for(i=0; i<1; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",array[i][j]);
            sum = sum+array[i][j];
        }
        printf("\n");
        printf("Sum of First Row:%d\n",sum);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<1; j++)
        {
            printf("%d ",array[i][j]);
            sum1 = sum1+array[i][j];
        }

    }
    printf("\n");
    printf("Sum of First column:%d\n",sum1);
printf("\n");
    for(i=n-1; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",array[i][j]);
            sum2 = sum2+array[i][j];
        }
        printf("\n");
        printf("Sum of Last Row:%d\n",sum2);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=m-1; j<m; j++)
        {
            printf("%d ",array[i][j]);
            sum3 = sum3+array[i][j];
        }

    }
    printf("\n");
    printf("Sum of Last column:%d\n",sum3);
printf("\n");

t2 = (sum1-array[0][0]);
t3 = (sum2-array[n-1][0]);
t4 = (sum3 - array[n-1][m-1]);
t5 = (t4 - array[0][m-1]);
printf("Sum of the frame of Matrix:%d\n",sum+t2+t3+t5);



    return 0;
}
