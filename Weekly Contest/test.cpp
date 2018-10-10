#include<stdio.h>
int main()
{
    int array[100],Size,i,j,temp=0,x,y,z,k;
    printf("Array Size: ");
    scanf("%d",&Size);
    printf("\nElement: ");

    for(i=0; i<Size; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<Size; i++)
    {
        for(j=i+1; j<Size; j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }

    }
    printf("\nSorted elements: ");
    for(i=0; i<Size; i++)
    {
        printf("%d ",array[i]);
    }

    if(Size%2==0)
    {
        x = (Size/2);
        y = x-1;
        z= array[x]+array[y];
        printf("\nTwo point: %d %d\n",array[x],array[y]);
        printf("Ans: %d\n", z/2);
    }
    else if(Size%2!=0)
    {
        k = Size/2;
        printf("\nMiddle number: %d\n",array[k]);
        printf("Ans: %d\n", array[k]);
    }

    return 0;
}


// 12 45 2 3 1 78 54 324 53 43 67
