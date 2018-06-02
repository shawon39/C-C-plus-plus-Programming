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
    int n,f=6; cin >> n;
    vector<string> v,v2;

    v.push_back("purple");  v2.push_back("Power");
    v.push_back("green");  v2.push_back("Time");
    v.push_back("blue");  v2.push_back("Space");
    v.push_back("orange");  v2.push_back("Soul");
    v.push_back("red");  v2.push_back("Reality");
    v.push_back("yellow");  v2.push_back("Mind");

    while(n--)
    {
        string str; cin >> str;

        for(int i=0; i<v.size(); i++)
        {
            if( v[i] == str ) {
               v[i] = "lol";
               f--;
               break;
            }
        }
    }
    cout << f <<endl;
    for(int i=0; i<v.size(); i++)
    {
        if( v[i] != "lol" ) {
            cout << v2[i] << endl;
        }
    }
    return 0;
}





