#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x==1) printf("Top 1\n");
    else if(x>=2 && x<=3) printf("Top 3\n");
    else if(x>=4 && x<=5) printf("Top 5\n");
    else if(x>=6 && x<=10) printf("Top 10\n");
    else if(x>=11 && x<=25) printf("Top 25\n");
    else if(x>=26 && x<=50) printf("Top 50\n");
    else if(x>=51 && x<=100) printf("Top 100\n");

    return 0;
}
