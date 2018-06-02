#include <stdio.h>
int main()
{
    int h,m,h1,f;
    char ch;
    while(scanf("%d %c %d",&h,&ch,&m)!=EOF)
    {
        f = (h*60)+m;
        if(f<=420) printf("Atraso maximo: 0\n");
        else printf("Atraso maximo: %d\n",f-420);
    }
    return 0;
}
