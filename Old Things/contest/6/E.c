#include <stdio.h>
int main()
{
    int i,num,count=0;
    scanf("%d",&num);

    int lol[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for(i=0; i<=13; i++)
    {
        if(num%lol[i]==0)
        {
            count=1;
            break;
        }
    }
    if(count==1) printf("YES\n");
    else printf("NO\n");

    return 0;
}
