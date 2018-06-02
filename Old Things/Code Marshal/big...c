#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if( a>b && a>c && a>d){
        printf("%d\n",a);
    }
    else if( b>a && b>c && b>d ){
        printf("%d\n",b);
    }
    else if( d>a && d>b && d>c ){
        printf("%d\n",d);
    }
    else{
        printf("%d\n",c);
    }
    return 0;
}
