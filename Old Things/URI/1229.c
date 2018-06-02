#include <stdio.h>
int main()
{
    int x,n,i;
    while(1)
    {
        int marry=0,john=0;
        scanf("%d",&x);
        if(x==0) break;
        else{
            for(i=0; i<x; i++)
            {
                scanf("%d",&n);
                if(n==0) marry++;
                else john++;
            }
            printf("Mary won %d times and John won %d times\n",marry,john);
        }
    }
    return 0;
}
