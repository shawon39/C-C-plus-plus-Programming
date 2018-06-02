#include<stdio.h>
int main()
{
    float A,B,MEDIA;
    scanf("%f%f%f",&A,&B);
    MEDIA =((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}
