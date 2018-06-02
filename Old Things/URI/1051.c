#include <stdio.h>
int main()
{
    double s;
    scanf("%lf",&s);
    if(s<=2000) printf("Isento\n");

    else if(s<=3000) printf("R$ %.2lf\n", (s - 2000.0) * 8/100);

    else if(s<=4500) printf("R$ %.2lf\n",1000*8/100 + (s-3000)*18/100);

    else printf("R$ %.2lf\n",1000*8/100+1500*18/100+(s-4500)*28/100);
    return 0;
}
