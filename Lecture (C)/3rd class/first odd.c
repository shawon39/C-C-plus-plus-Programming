#include <stdio.h>
int main()
{
    int arr[5];
    int i;

    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++) {
        if( arr[i]%2 == 1 ) {
            printf("%d ", arr[i]);
            break;
        }
    }
    return 0;
}

