#include<stdio.h>
int main()
{
    int i,n,sum = 0;
    float avg,j=0;
    while(1)
    {
      scanf("%d",&n);
      if(n<0)break;
      sum = sum + n;
      j ++;
    }
   avg = sum / j;
    printf("%.2f\n",avg);

}
