#include <stdio.h>

int main( void ){

    int t,n,nums[1100],i,j;

    scanf("%d", &t);

    while( t-- ){

        scanf("%d", &n);

        for( i = 0; i < n; i++ ){
            scanf("%d", &nums[i]);
        }

        for( i = n-1; i >= 0; i-- ){
            printf("%d", nums[i]);

            if( i != 0 )
                printf(" ");
        }

        printf("\n");
    }
    return 0;
}
