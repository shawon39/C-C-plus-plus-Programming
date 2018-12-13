#include<stdio.h>
int main ()
{
int i;
float s=0.0, k = 1.0;

for(i=1;i<=100;i++)
{
    s += (1/k);
    k++;
}
printf("%.2f\n",s);
return 0;
}
