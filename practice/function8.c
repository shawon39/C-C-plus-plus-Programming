#include <stdio.h>

void abc(int array1[][5])
{
    printf("Before Values: %d\n\n",array1[1][2]);
    array1[1][2]=20;
    printf("After Values: %d\n",array1[1][2]);
}
int main()
{
    int array[5][5];
    array[1][2]=12;
    printf("Before values: %d\n",array[1][2]);
    abc(array);
    printf("After values: %d\n",array[1][2]);
    return 0;
}

