#include <stdio.h>
int main ()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    float a,b,TOTAL;
    char name[100];
    scanf("%s",name);
    scanf("%f%f",&a,&b);
    TOTAL=a+(b*0.15);
    printf("TOTAL = R$ %.2f\n",TOTAL);
    return 0;
}
