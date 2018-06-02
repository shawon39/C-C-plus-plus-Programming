#include <stdio.h>

int main()
{
    char num1[100],num2[100],num3[100],num4[100];
    int m,ln1,ln2,i,k,k2,t;
    scanf("%d",&t);
    while(t--)
    {
        k=0,k2=0;
        scanf("%s%s",num1,num2);
        ln1=strlen(num1);
        ln2=strlen(num2);
        m=ln1-ln2;
        for(i=ln1-1; i>=m; k++,i--)
        {
            num3[k]=num1[i];
        }
        num3[k]='\0';

        for(i=ln2-1; i>=0; k2++,i--)
        {
            num4[k2]=num2[i];
        }
        num4[k2]='\0';

        if(strcmp(num3,num4)==0) printf("encaixa\n");
        else printf("nao encaixa\n");

    }
    return 0;
}
