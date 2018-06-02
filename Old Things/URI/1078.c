#include <stdio.h>
int main()
{
    int num,i,m;
    scanf("%d",&num);

    for(i=1; i<=10; i++)
    {
        m = i * num;
        printf("%d x %d = %d\n",i,num,m);
    }
    return 0;
}
