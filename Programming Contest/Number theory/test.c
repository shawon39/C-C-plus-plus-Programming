#include<stdio.h>
int main()
{
    int num[100],i,j,size,temp;
    printf("The size of Array: ");
    scanf("%d",&size);
    printf("The Element of array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(num[i] < num[j])
            {
                temp = num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0; i<size; i++)
    {
        printf("%d ",num[i]);
    }
}
