#include<stdio.h>
int main()
{
    float i,j;
    int a,b;
    for(i=0.0; i<2.1; i=i+0.2)
    {
        for(j=1.0; j<4.0; j++)
            if(i>0 && i<1 || i>1 && i<2)
            {
              printf("I=%.1f J=%.1f\n",i,i+j);
            }
            else
            {
                a = i;
                b = i+j;
                printf("I=%d J=%d\n",a,b);

            }
    }
    return 0;
}
