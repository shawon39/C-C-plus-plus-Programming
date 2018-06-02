#include <stdio.h>
int main()
{
    int i,j;
    scanf("%d",&i);
    scanf("%d",&j);

    // Relational operations
    printf("i<j %d\n",i<j);
    printf("i<=j %d\n",i<=j);
    printf("i>j %d\n",i>j);
    printf("i>=j %d\n",i>=j);

    // Logical; Operations
    printf("i && j %d\n",i && j);
    printf("i || j %d\n",i || j);
    printf("!i !j %d %d\n",3!i,!j);

    return 0;
}
