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
    int n;  char dir, ch;
    int x =0, y=0, ct = 0, lol =0, shawon ;
    cin >> n;
    string str;

    for(int i=0; i<n; i++)
    {
        cin >> ch;
        str += ch;
    }

    if( str[0] =='R' ) dir = 'd';
    if( str[0] =='U' ) dir = 'u';

    for( int i=0; i<str.length(); i++ )
    {
        if(str[i] == 'U') y++;
        if(str[i] == 'R') x++;

        if( dir == 'u' && x > y ) {
             ct++; dir = 'd'; continue;
        }
        if( dir == 'd' && x < y ) {
             ct++; dir = 'u'; continue;
        }
    }
    cout << ct <<endl;
    return 0;
}


