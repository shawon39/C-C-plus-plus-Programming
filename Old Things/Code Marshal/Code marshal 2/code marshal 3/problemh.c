#include<stdio.h>
int main()
{
    float f,c;
    scanf("%f",&c);
    f = ((9*c)+160)/5;
    if(f>=98.4)
    {
        printf("Fever\n");
    }
    else {
        printf("Not fever\n");
    }
    return 0;
}
