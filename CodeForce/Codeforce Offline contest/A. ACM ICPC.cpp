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
    int total=0,p[10];
    for(int i=0; i<6; i++)
    {
        cin >> p[i];
        total+=p[i];
    }
    /*
    if(total%2==1) {pf("NO"); nl; murikha;}
    if(p[0]+p[1]+p[2] == total/2) {pf("YES"); nl; murikha;}
    if(p[0]+p[1]+p[3] == total/2) {pf("YES"); nl; murikha;}
    if(p[0]+p[1]+p[4] == total/2) {pf("YES"); nl; murikha;}
    if(p[0]+p[1]+p[5] == total/2) {pf("YES"); nl; murikha;}
    if(p[0]+p[2]+p[3] == total/2) {pf("YES"); nl; murikha;}
    if(p[0]+p[2]+p[4] == total/2) {pf("YES"); nl; murikha;}
    if(p[0]+p[2]+p[5] == total/2) {pf("YES"); nl; murikha;}
    if(p[0]+p[3]+p[4] == total/2) {pf("YES"); nl; murikha;}
    if(p[0]+p[3]+p[5] == total/2) {pf("YES"); nl; murikha;}
    if(p[0]+p[4]+p[5] == total/2) {pf("YES"); nl; murikha;}
    pf("NO"); nl;
    */
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            for(int k=j+1; k<6; k++)
            {
                if( (p[i]+p[j]+p[k])*2 == total) {pf("YES"); nl; murikha;}
            }
        }
    }
    pf("NO"); nl;
    return 0;
}

