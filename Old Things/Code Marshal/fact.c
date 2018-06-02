#include <stdio.h>
int main()
{
    int a,b=1,c;
    scanf("%d",&a);
    for(c=1;c<=a;c++){
        b = b * c;
    }
    printf("%d\n",b);
    return 0;
}
