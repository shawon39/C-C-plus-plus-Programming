#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if( i%10 == 0 ) {
            printf("%d ", i);
        }
    }
}
