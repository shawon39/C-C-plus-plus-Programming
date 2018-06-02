#include <stdio.h>
int main()
{
    char str[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
