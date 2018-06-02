#include <stdio.h>
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n<=10) printf("%d 0\n",n);
        else if(n>10 && n<=20)
        {
            printf("10 %d\n",n-10);
        }
    }
    return 0;
}
