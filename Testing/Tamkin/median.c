#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, arr[n+5];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Median: %d\n", arr[n/2]);

    return 0;
}



