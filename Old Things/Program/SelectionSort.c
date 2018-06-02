#include<stdio.h>
int main()
{
    int i,j,n,minIndex,temp,minValue,num[30];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0; i<n-1; i++)
    {
        minValue=num[i];
        minIndex=i;
        for(j=i+1; j<n; j++)
        {
            if(minValue>num[j])
            {
                minValue=num[j];
                minIndex=j;
            }
        }
        temp = num[i];
        num[i] = num[minIndex];
        num[minIndex] = temp;
    }





    printf("\nSorted list is as follows\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}
