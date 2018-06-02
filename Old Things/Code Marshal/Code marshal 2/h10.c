#include <stdio.h>
int main()
{
    int i,x;
    scanf("%d",&i);
    for(x=i; x>0; x--)
    {
        printf("%d\n",x);
       // if(x=0)
        //{
            printf("\a");
       //wss }
    }
    return 0;
}
