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
    int n, arr[361],mn=1000,another,dif,sum;
    cin >> n;
    for1(i,0,n){cin >> arr[i];}
    for(int i=0; i<n; i++) {
        sum = 0;
            for(int j=i; j<n; j++) {
                sum+=arr[j];
                another = abs(360-sum);
                dif = abs(sum-another);
                if(dif < mn) mn = dif;
            }
    }
    pf1(mn);
    murikha;
}
