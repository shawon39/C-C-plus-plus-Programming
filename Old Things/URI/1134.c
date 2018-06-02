#include <stdio.h>
int main()
{
    int i,n,a=0,g=0,d=0;
    while(scanf("%d",&n)!=EOF){
        if(n==4) break;
        else if(n==1) a++;
        else if(n==2) g++;
        else if(n==3) d++;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    return 0;
}
