#include <stdio.h>
int main()
{
    int x,b,y,r,s;
    scanf("%d%d",&x,&y);

    r= x+y;
    s= x*y;
    scanf("%d",&b);

    if(b==0){
        printf("%d",r);
    }
    else{
        printf("%d",s);
    }
    return 0;
}
