#include <stdio.h>
int main()
{
    int i,num,prime=0;
    scanf("%d",&num);
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            prime=1;
            break;
        }
    }
    if(prime==0)
    {
        printf("Number is Prime\n");
    }
    else
    {
        printf("Number is not prime\n");
    }
    return 0;

}
