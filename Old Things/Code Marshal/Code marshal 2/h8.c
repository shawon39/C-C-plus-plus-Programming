#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);


    for(b=2; b<a; b++)
    {
        if(a%b==0)
        {
            c=0;
        }
    }
    if(c==0) printf("The number is not prime");
    else printf("The number is prime");

    return 0;

}
