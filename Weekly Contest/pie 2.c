#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795
//#define PI acos(-1.0)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)

int main()
{
    int test, i; sf1(test);

    while(test--)
    {
        double pie[100005], mx=0, r, error = 0.0001;
        int n,f; sf2(n,f);

        for( i=0; i<n; i++)
        {
            scanf("%lf",&r);
            pie[i]=PI*r*r;
            if(mx > pie[i]) {
                mx = pie[i];
            }
        }

        double high=mx, low=0, mid;

        while( high - low > error )
        {

            int ct = 0;
            mid = (high+low)/2;

            for( i=0; i<n; i++)
            {
                ct += (pie[i]/mid);

            }
            if( ct >= f+1) low = mid;
            else high = mid;

        }
        printf("%.4f\n",mid);
    }
    return 0;
}

