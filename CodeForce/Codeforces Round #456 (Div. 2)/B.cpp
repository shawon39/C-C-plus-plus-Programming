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
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

long long int arr[10000000];

int main()
{
    long long int i,j,n,k,sum=1;
    cin >> n >> k;

    for(i=2,j=0; i<=n; i++)
    {
        sum = (sum^i);
        arr[j++] = sum;
    }

    for(i=0; i<n; i++)
    {
        cout << arr[i] <<endl;
    }


    return 0;
}

