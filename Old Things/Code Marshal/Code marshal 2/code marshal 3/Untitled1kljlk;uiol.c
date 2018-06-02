#include<stdio.h>

int main()
{
    int c;
    double f;
    scanf("%d",&c);
    f=(c*9)/5+32;
    if(f>=98.4)
    {
        printf("Fever\n");
    }
    else
    {
        printf("Not fever\n");
    }
    return 0;
}

