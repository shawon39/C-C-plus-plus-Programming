#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)
int main()
{
    int T,i=1,n;
    double R,d,r,l;
    scanf("%d",&T);
    while(T--){
        scanf("%lf %d",&R,&n);
        l = (double)n;
        d = PI/l;
        r = ( R*sin(d) ) / (1+sin(d));

       // printf("Case %d: %.10lf\n",i++,r);
       // end
       // OR

        int m;
        m = (int)r;
        if(r/m!=1){
            printf("Case %d: %.10lf\n",i++,r);
        }
        else{
            printf("Case %d: %.0lf\n",i++,r);
        }

    }
    return  0;
}
