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
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

bool myfun(int a, int b){
    return a>b;
}

int arr[500];
vector <int> v;

int solve(int m, int n)
{
    int sum = 0;

    for(int i=m; i<n-1; i++)
    {
        sum += v[i];
    }
    return sum;
}

int main()
{
    int n,d; sf2(n,d);

    for(int i=0; i<n; i++)
    {
        sf1(arr[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        int lol = abs( arr[i] - arr[i+1] );
        v.push_back( lol );
    }

    sort(v.begin(), v.end(), myfun);

    int lol, ct=0;

    for(int i=0; i<n-1; i++)
    {
        lol = solve(i,n);
        if( d >= lol ){
            break;
        }
        else ct++;
    }
    pf1(ct);
    return 0;
}


