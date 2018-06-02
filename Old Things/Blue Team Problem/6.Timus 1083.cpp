#include <stdio.h>
#include <string.h>

int main()
{
    int i,n,fact=1,k;
    char ch[100];
    scanf("%d",&n);
    scanf("%s",&ch);
    k=strlen(ch);

    while(n>0)
    {
        fact*=n;
        n-=k;
    }

    printf("%d\n",fact);
    return 0;
}
