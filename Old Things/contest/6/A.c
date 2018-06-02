#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,i=0,t;
    scanf("%d",&t);
    while(t--)
    {
        int lol=0,result=0;
        scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
        if(e >= f && e >= g)
        {
            lol+=e;
            if(e>=f && f>=g)
            {
                lol+=f;
            }
            else lol+=g;
        }
        else if(f>=e && f>=g)
        {
            lol+=f;
            if(f>=e && e>=g)
            {
                lol+=e;
            }
            else lol+=g;
        }
        else
        {
            lol+=g;
            if(g>=e && e>=f)
            {
                lol+=e;
            }
            else lol+=f;
        }
        result=a+b+c+d+(lol/2);

        if(result>=90) printf("Case %d: A\n",++i);
        else if(result>=80 && result<90) printf("Case %d: B\n",++i);
        else if(result>=70 && result<80) printf("Case %d: C\n",++i);
        else if(result>=60 && result<70) printf("Case %d: D\n",++i);
        else printf("Case %d: F\n",++i);
    }
    return 0;
}
