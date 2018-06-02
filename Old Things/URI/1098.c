#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h,i,j,k;

    for(i=0; i<1; i++)
    {
        for(j=1; j<=3; j++)
        {
            printf("I=%.0lf J=%.0lf\n",i,j);
        }
    }
    k=1.2;
    for(i=.2; i<1.0; i+=.2)
    {
        for(j=k; j<4.0; j++){

            printf("I=%.1lf J=%.1lf\n",i,j);
        }
        k=k+.2;
    }
    for(i=1; i<2; i++)
    {
        for(j=2; j<=4; j++)
        {
            printf("I=%.0lf J=%.0lf\n",i,j);
        }
    }
     k=2.2;
    for(i=1.2; i<1.8; i+=.2)
    {
        for(j=k; j<5.0; j++){

            printf("I=%.1lf J=%.1lf\n",i,j);
        }
        k=k+.2;
    }
    for(i=2; i<3; i++)
    {
        for(j=3; j<=5; j++)
        {
            printf("I=%.0lf J=%.0lf\n",i,j);
        }
    }

    return 0;
}

/**
I=0 J=1
I=0 J=2
I=0 J=3

I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2

I=0.4 J=1.4
I=0.4 J=2.4
I=0.4 J=3.4

I=0.6 J=1.6
I=0.6 J=2.6
I=0.6 J=3.6

I=0.8 J=1.8
I=0.8 J=2.8
I=0.8 J=3.8

I=1 J=2
I=1 J=3
I=1 J=4

I=1.2 J=2.2
I=1.2 J=3.2
I=1.2 J=4.2
I=1.4 J=2.4
I=1.4 J=3.4
I=1.4 J=4.4
I=1.6 J=2.6
I=1.6 J=3.6
I=1.6 J=4.6
I=1.8 J=2.8
I=1.8 J=3.8
I=1.8 J=4.8

I=2 J=3
I=2 J=4
I=2 J=5
*/
