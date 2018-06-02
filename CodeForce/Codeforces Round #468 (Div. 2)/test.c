#include <stdio.h>

int main()
{
    int arr[20];
    int i, j, n, count = 0;
    printf("Enter n of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        count = 0;
        for(j=0; j<n; j++)
            {

            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > 1 ) printf("%d = %d\n",arr[i],count);
    }

    return 0;
}
