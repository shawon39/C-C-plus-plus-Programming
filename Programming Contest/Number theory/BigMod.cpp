#include <bits/stdc++.h>
using namespace std;

int BigMod(int b, int p, int m)
{
    if(p==0) return 1;

    else if( p%2==0 ){
        int half = BigMod(b,p/2,m);
        return (half*half)%m;
    }
    else if( p%2 == 1 ){
        int part1 = b%m;
        int part2 = BigMod(b,p-1,m);
        return (part1*part2)%m;
    }
}

int main()
{
    int b,p,m;
    while(scanf("%d %d %d",&b,&p,&m)!=EOF){
        printf("%d\n",BigMod(b,p,m));
    }
    return 0;
}
