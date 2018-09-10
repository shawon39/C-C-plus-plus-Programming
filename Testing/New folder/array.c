#include <stdio.h>
int main()
{
    int i, arr[1000];

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for(i=0; i<5; i++)
    {
        if( arr[i] < min )
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}
