#include <bits/stdc++.h>
using namespace std;

#define mx 1000000007
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
#define slow ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

long long int BigMod(long long int b, long long int p, long long int m)
{
    if(p==0) return 1;

    else if( p%2==0 ){
        long long int half = BigMod(b,p/2,m);
        return (half*half)%m;
    }

    else if( p%2 == 1 ){
        long long int part1 = b%m;
        long long int part2 = BigMod(b,p-1,m);
        return (part1*part2)%m;
    }
}

int main()
{
    long long int n,m,x;
    cin >> n >> m;
    if(n >= 30){
        cout << m << endl;
        return 0;
    }
    x = BigMod(2,n,mx);
    cout << m%x << endl;
    return 0;
}
/*
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

int main()
{
    int n,m;
    cin >> n >> m;

    if(n <= 30){
        cout << m%(1<<n) <<endl;
    }
    else{
        cout << m <<endl;
    }
    return 0;
}
*/


