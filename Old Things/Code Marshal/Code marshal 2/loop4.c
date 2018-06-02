#include <stdio.h>
int main()
{
    int a,b,c;
    for(a=0;a<3;a++){
        for(b=0;b<3;b++){
            for(c=0;c<3;c++){
                printf("%d %d %d\n",a,b,c);
            }
        }
    }
}
