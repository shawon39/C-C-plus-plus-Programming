#include<stdio.h>
int main()
{
    int asending[1000],desending[1000],cat[10000];
    int i,j,a,n,size1,size2,temp1;

    printf("The size of array1: ");
    scanf("%d",&size1);
    printf("\nThe element of Array1: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d",&asending[i]);
    }
    for(i=0; i<size1; i++)
    {
        for(j=i+1; j<size1; j++)
        {
            if(asending[i]>asending[j])
            {

                temp1=asending[i];
                asending[i]=asending[j];
                asending[j]=temp1;
            }
        }
    }
    printf("\nAscending order of Array1: ");
    for(i=0; i<size1; i++)
    {

        printf("%d ",asending[i]);
    }
    printf("\n\nThe size of array2: ");
    scanf("%d",&size2);
    printf("\nThe element of Array2: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d",&desending[i]);
    }
    for(i=0; i<size2; i++)
    {
        for(j=i+1; j<size2; j++)
        {
            if(desending[i]<desending[j])
            {

                temp1=desending[i];
                desending[i]=desending[j];
                desending[j]=temp1;
            }
        }
    }
    printf("\nDescending order of Array2: ");
    for(i=0; i<size2; i++)
    {

        printf("%d ",desending[i]);
    }
    printf("\n\n");

    for (i=0; i<size1; i++)
    {
        cat[i]=asending[i];
    }
    for (i=0, j=size1; i<size2; i++, j++)
    {
        cat[j]=desending[i];
    }

    printf("Result: ");
    for(int i=0; i<size1+size2; i++)
    {
        printf("%d ", cat[i]);
    }
    printf("\n");
    return 0;
}
