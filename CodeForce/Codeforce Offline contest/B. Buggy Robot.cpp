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
    string str;
    int i,x=0,y=0,ct=0,n;
    sf1(n);
    cin >> str;
    for1(i,0,n)
    {
        if(str[i]=='U') y++;
        else if(str[i]=='D') y--;
        else if(str[i]=='L') x--;
        else if(str[i]=='R') x++;
    }
    cout << n - (abs(x)+abs(y)) <<endl;
    murikha;
}

