#include<stdio.h>
int main()
{
    int temp,num,a,b,c,d,e,f,g;
    scanf("%d",&num);
    temp = num % 100;
    a = num / 100 ;
    num = temp;
    temp = num % 50;
    b = num / 50 ;
    num = temp;
    temp = num % 20;
    c = num / 20 ;
    num = temp;
    temp = num % 10;
    d = num / 10 ;
    num = temp;
    temp = num % 5;
    e = num / 5 ;
    num = temp;
    temp = num % 2;
    f = num / 2;
    num = temp;
    temp = num % 1;
    g = num / 1;
    num = temp;
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",b);
    printf("%d nota(s) de R$ 20,00\n",c);
    printf("%d nota(s) de R$ 10,00\n",d);
    printf("%d nota(s) de R$ 5,00\n",e);
    printf("%d nota(s) de R$ 2,00\n",f);
    printf("%d nota(s) de R$ 1,00\n",g);

    main();
    return 0;

}
