#include <stdio.h>

int main() {

    int n;
    double m,a,b,lol;
    double mn=100000000.0;
    scanf("%d %lf",&n,&m);

    while(n--)
    {
        scanf("%lf %lf",&a,&b);
        lol = m*(a/b);
        if(lol<mn){
            mn = lol;
        }
    }
    printf("%.8lf\n",mn);
    return 0;
}
