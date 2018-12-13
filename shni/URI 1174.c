#include<stdio.h>
int main()
{
    int i,n;
    float array[100];
    for(i=0;i<100;i++){
        scanf("%f",&array[i]);
            if (array[i]<=10)
      printf("A[%d] = %.1f\n",i,array[i]);
    }
return 0;

}
