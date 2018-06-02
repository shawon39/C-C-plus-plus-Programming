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
    fast; int n, f = 1;
    string str, str2;
    char ch;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> ch;
        str += ch;
    }

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'a' )
        {
            if(f == 0 ) continue;
            str2 += str[i];
            f = 0;
        }
        else if(str[i] == 'e')
        {
            if(f == 0 ) continue;
            str2 += str[i];
            f = 0;
        }
        else if(str[i] == 'i' )
        {
            if(f == 0 ) continue;
            str2 += str[i];
            f = 0;
        }
        else if(str[i] == 'o' )
        {
            if(f == 0 ) continue;
            str2 += str[i];
            f = 0;
        }
        else if(str[i] == 'u' )
        {
            if(f == 0 ) continue;
            str2 += str[i];
            f = 0;
        }
        else if(str[i] == 'y' )
        {
            if(f == 0 ) continue;
            str2 += str[i];
            f = 0;
        }
        else
        {
            str2 += str[i];
            f = 1;
        }
    }
    cout << str2 <<endl;

    return 0;
}
