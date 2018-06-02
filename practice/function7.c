#include <stdio.h>

void abc(int array1[],int *a)
{
    printf("Before Values: %d\n\n",array1[2]);
    array1[2]=20;
    *a=5;
    printf("After Values: %d\n",array1[2]);
}
int main()
{
    int a=4,array[]={1,2,30,4,5,6,7,8,9,10};
    printf("Before values: %d\n",array[2]);
    abc(array,&a);
    printf("After values: %d\n",array[2]);
    printf("Values of a: %d\n",a);
    return 0;
}
