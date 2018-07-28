#include <stdio.h>

int check(int num)
{
    if( num % 2 == 0 ) return 1;
    else return 0;

}

int main()
{
    int x;
    scanf("%d", &x);

    int res = check(x);

    if(res == 1) printf("Even\n");
    else printf("Odd\n");

    return 0;
}


