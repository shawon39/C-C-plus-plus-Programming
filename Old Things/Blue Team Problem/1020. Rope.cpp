#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1.0)

struct lol { double a,b; };

int main()
{
    int n; double r, dist=0, lol=0;
    cin >> n >> r;

    struct lol c[101];

    for(int i=0; i<n; i++)
    {
        cin >> c[i].a >> c[i].b;
    }

    if(n==1)
    {
         lol = 2.0 * PI * r;
         printf("%.2f\n", lol);
         return 0;
    }

    lol = 2.0 * PI * r;

    for(int i=0; i<n-1; i++)
    {
        dist += sqrt( pow( (c[i].b - c[i].a),2 ) + pow( (c[i+1].b - c[i+1].a),2 ) );
    }
    dist += sqrt( pow( (c[0].b - c[0].a),2 ) + pow( (c[n-1].b - c[n-1].a),2 ) );

    printf("%.2f\n", (lol+dist));
    return 0;
}
