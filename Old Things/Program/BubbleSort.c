#include<stdio.h>
int main()
{
    int num[50],n,i,j,temp;

    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=1; i<n; i++)
    {
        for(j=0; j<(n-i); j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    printf("\nArray after sorting: ");

    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}
