#include <stdio.h>
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p = array;
    *(p+5)=10;

    printf("%d ",array[5]);

}
