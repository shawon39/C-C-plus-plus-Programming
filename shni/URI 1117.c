#include<stdio.h>
int main()
{

    int  count=0;
    float n,array[10],avg;
    while(1)
    {
        scanf("%f",&n);
    if(n>=0 && n<=10)
    {
        array[count]=n;
        count++;

    }
    else
    {
        printf("nota invalida\n");
    }
    if(count == 2)break;
    }
    avg = array[0]+array[1];
    printf("media = %.2f\n",avg/2.0);

  return 0;
}
