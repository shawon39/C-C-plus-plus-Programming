#include <stdio.h>
int main()
{

    int num, rev=0;
    scanf("%d", &num);

    int cnt = 0;

    while( num > 0 )
    {
        int temp = num % 10;
        if( temp == 1 ) cnt++;
        num = num /10;
    }

    printf("Reverse: %d", cnt);

    return 0;
}






