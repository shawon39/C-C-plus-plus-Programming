#include <bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define nl printf("\n")
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define for1(i, x, y) for(int i=(x); i<(y); i++)
#define for2(i, x, y) for(int i=(x-1); i>=(y); i--)
#define murikha return 0

int main()
{
    int w; sf1(w);
    /*
    for1(i,1,w) {
        for1(j,1,w) {
            if(i%2==0 && j%2==0 && (i+j)==w){
                pf("YES"); nl;
                return 0;
            }
        }
    }
    pf("NO"); nl; */

    if(w%2==0 && w!=2) {pf("YES"); nl;}
    else pf("NO"); nl;
    murikha;
}

