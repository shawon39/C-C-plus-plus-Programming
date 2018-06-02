#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    double x,y,z,res;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    x = 1.0 * a / b;
    y = 1.0 * c / d;
    z = 1.0 - (x)*(y) ;
    res = x/z;
    printf("%.12lf\n",res);
    return 0;
}
