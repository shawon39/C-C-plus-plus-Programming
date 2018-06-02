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

// descending order
bool myfun(int a, int b){
    return a>b;
}

struct greaterr
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
//sort(v.begin(), v.end(), greaterr());
//v.erase (v.begin());


int main()
{
    int x,y; cin >> x >> y;

    if( x == 2 && y == 4 ) cout << '=' <<endl;
    else if( y == 2 && x == 4 ) cout << '=' <<endl;
    else if( x == 1 && y > 1 ) cout << '<' <<endl;
    else if( y == 1 && x > 1 ) cout << '>' <<endl;
    else if( x == 2 && y == 3  ) cout << '<' <<endl;
    else if( x == 3 && y == 2  ) cout << '>' <<endl;
    else if( x == y ) cout << '=' <<endl;
    else {
        if( x > y ) cout << '<' <<endl;
        else cout << '>' <<endl;
    }
   //main();
    return 0;
}






